open ColorsUtils;

type color =
  | Red
  | Yellow
  | Green
  | Blue
  | White
  | Cyan
  | Magenta
  | BgBlack
  | BgRed
  | BgGreen
  | BgYellow
  | BgBlue
  | BgMagenta
  | BgCyan
  | BgWhite
  | BgRedBright
  | BgGreenBright
  | BgYellowBright
  | BgBlueBright
  | BgMagentaBright
  | BgCyanBright
  | BgWhiteBright;

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
  | Red => ColorsUtils.red(str)
  | Yellow => ColorsUtils.yellow(str)
  | Green => ColorsUtils.green(str)
  | Blue => ColorsUtils.blue(str)
  | Magenta => ColorsUtils.magenta(str)
  | Cyan => ColorsUtils.cyan(str)
  | White => ColorsUtils.white(str)
  | BgBlack => ColorsUtils.bgBlack(str)
  | BgRed => ColorsUtils.bgRed(str)
  | BgGreen => ColorsUtils.bgGreen(str)
  | BgYellow => ColorsUtils.bgYellow(str)
  | BgBlue => ColorsUtils.bgBlue(str)
  | BgMagenta => ColorsUtils.bgMagenta(str)
  | BgCyan => ColorsUtils.bgCyan(str)
  | BgWhite => ColorsUtils.bgWhite(str)
  | BgRedBright => ColorsUtils.bgRedBright(str)
  | BgGreenBright => ColorsUtils.bgGreenBright(str)
  | BgYellowBright => ColorsUtils.bgYellowBright(str)
  | BgBlueBright => ColorsUtils.bgBlueBright(str)
  | BgMagentaBright => ColorsUtils.bgMagentaBright(str)
  | BgCyanBright => ColorsUtils.bgCyanBright(str)
  | BgWhiteBright => ColorsUtils.bgWhiteBright(str)
  };

let modify = (m, str) =>
  switch m {
  | Reset => ColorsUtils.reset(str)
  | Bold => ColorsUtils.bold(str)
  | Dim => ColorsUtils.dim(str)
  | Italic => ColorsUtils.italic(str)
  | Underline => ColorsUtils.underline(str)
  | Inverse => ColorsUtils.inverse(str)
  | Hidden => ColorsUtils.hidden(str)
  | Strikethrough => ColorsUtils.strikethrough(str)
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
  | Red => ColorsUtils.bgRed(str)
  | Yellow => ColorsUtils.bgYellow(str)
  | Green => ColorsUtils.bgGreen(str)
  | Blue => ColorsUtils.bgBlue(str)
  | Magenta => ColorsUtils.bgMagenta(str)
  | Cyan => ColorsUtils.bgCyan(str)
  | White => ColorsUtils.bgWhite(str)
  | BgBlack => ColorsUtils.bgBlack(str)
  | BgRed => ColorsUtils.bgRed(str)
  | BgGreen => ColorsUtils.bgGreen(str)
  | BgYellow => ColorsUtils.bgYellow(str)
  | BgBlue => ColorsUtils.bgBlue(str)
  | BgMagenta => ColorsUtils.bgMagenta(str)
  | BgCyan => ColorsUtils.bgCyan(str)
  | BgWhite => ColorsUtils.bgWhite(str)
  | BgRedBright => ColorsUtils.bgRedBright(str)
  | BgGreenBright => ColorsUtils.bgGreenBright(str)
  | BgYellowBright => ColorsUtils.bgYellowBright(str)
  | BgBlueBright => ColorsUtils.bgBlueBright(str)
  | BgMagentaBright => ColorsUtils.bgMagentaBright(str)
  | BgCyanBright => ColorsUtils.bgCyanBright(str)
  | BgWhiteBright => ColorsUtils.bgWhiteBright(str)
  };

let applyBackgroud = (bg, str) =>
  switch bg {
  | Some(b) => changeBackground(b, str)
  | None => str
  };

let colors = (~color=?, ~bg=?, ~modifier=?, ~keywordOptions=?, str) => {
  let modifyStr =
    highlightKeyword(keywordOptions, str)
    |> doModifier(modifier)
    |> doColorChange(color, keywordOptions)
    |> applyBackgroud(bg);
  modifyStr;
};