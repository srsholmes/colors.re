open Utils;

type color =
  | Red
  | Yellow
  | Green
  | Blue
  | White
  | Cyan
  | Magenta;

type modifier =
  | Reset
  | Bold
  | Dim
  | Italic
  | Underline
  | Inverse
  | Hidden
  | Strikethrough;

type keywordOptions = {
  colorType: color,
  word: string
};

let changeColor = (c, str) =>
  switch c {
  | Red => Utils.red(str)
  | Yellow => Utils.yellow(str)
  | Green => Utils.green(str)
  | Blue => Utils.blue(str)
  | Magenta => Utils.magenta(str)
  | Cyan => Utils.cyan(str)
  | White => Utils.white(str)
  };

let modify = (m, str) =>
  switch m {
  | Reset => Utils.reset(str)
  | Bold => Utils.bold(str)
  | Dim => Utils.dim(str)
  | Italic => Utils.italic(str)
  | Underline => Utils.underline(str)
  | Inverse => Utils.inverse(str)
  | Hidden => Utils.hidden(str)
  | Strikethrough => Utils.strikethrough(str)
  };

let changeKeyword = (keyword, str, color) => {
  let containsString = Js.String.includes(keyword, str);
  containsString ?
    Js.String.replace(keyword, changeColor(color, keyword), str) : str;
};

let doColorChange = (color, keywordOptions, str) =>
  switch color {
  | Some(c) =>
    switch keywordOptions {
    | Some({word}) =>
      /* Only change the strings which arent keyword */
      Js.String.split(" ", str)
      |> Js.Array.map(x => x === word ? x : changeColor(c, x))
      |> Js.Array.joinWith(" ")
    | None => changeColor(c, str)
    }
  | None => str
  };

let doModifier = (modifier, str) =>
  switch modifier {
  | Some(m) => modify(m, str)
  | None => str
  };

let highlightKeyword = (options, str) =>
  switch options {
  | Some({colorType, word}) => changeKeyword(word, str, colorType)
  | None => str
  };

let changeBackground = (c, str) =>
  switch c {
  | Red => Utils.bgRed(str)
  | Yellow => Utils.bgYellow(str)
  | Green => Utils.bgGreen(str)
  | Blue => Utils.bgBlue(str)
  | Magenta => Utils.bgMagenta(str)
  | Cyan => Utils.bgCyan(str)
  | White => Utils.bgWhite(str)
  };

let applyBackgroud = (bg, str) =>
  switch bg {
  | Some(b) => changeBackground(b, str)
  | None => str
  };

let recolor = (~color=?, ~bg=?, ~modifier=?, ~keywordOptions=?, str) => {
  let modifyStr =
    highlightKeyword(keywordOptions, str)
    |> doModifier(modifier)
    |> doColorChange(color, keywordOptions)
    |> applyBackgroud(bg);
  modifyStr;
};

let myString =
  recolor(
    ~color=Blue,
    ~modifier=Bold,
    ~bg=White,
    ~keywordOptions={colorType: Green, word: "my"},
    "this is my string"
  );

Js.log(myString);