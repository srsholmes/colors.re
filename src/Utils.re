open Styles;

let startWrap = v => {j|\u001b[$v|j} ++ "m";

let endWrap = v => {j|\u001b[$v|j} ++ "m";

let makeString = (head, last, str) => startWrap(head) ++ str ++ endWrap(last);

module Utils = {
  type t;
  let compose = (f, g, x) => f(g(x));
  let pipe = (f, g, x) => g(f(x));
  let reset = makeString(Styles.reset[0], Styles.reset[1]);
  let bold = makeString(Styles.bold[0], Styles.bold[1]);
  let dim = makeString(Styles.dim[0], Styles.dim[1]);
  let italic = makeString(Styles.italic[0], Styles.italic[1]);
  let underline = makeString(Styles.underline[0], Styles.underline[1]);
  let inverse = makeString(Styles.inverse[0], Styles.inverse[1]);
  let hidden = makeString(Styles.hidden[0], Styles.hidden[1]);
  let strikethrough =
    makeString(Styles.strikethrough[0], Styles.strikethrough[1]);
  let black = makeString(Styles.black[0], Styles.black[1]);
  let red = makeString(Styles.red[0], Styles.red[1]);
  let green = makeString(Styles.green[0], Styles.green[1]);
  let yellow = makeString(Styles.yellow[0], Styles.yellow[1]);
  let blue = makeString(Styles.blue[0], Styles.blue[1]);
  let magenta = makeString(Styles.magenta[0], Styles.magenta[1]);
  let cyan = makeString(Styles.cyan[0], Styles.cyan[1]);
  let white = makeString(Styles.white[0], Styles.white[1]);
  let gray = makeString(Styles.gray[0], Styles.gray[1]);
  let grey = makeString(Styles.grey[0], Styles.grey[1]);
  let bgBlack = makeString(Styles.bgBlack[0], Styles.bgBlack[1]);
  let bgRed = makeString(Styles.bgRed[0], Styles.bgRed[1]);
  let bgGreen = makeString(Styles.bgGreen[0], Styles.bgGreen[1]);
  let bgYellow = makeString(Styles.bgYellow[0], Styles.bgYellow[1]);
  let bgBlue = makeString(Styles.bgBlue[0], Styles.bgBlue[1]);
  let bgMagenta = makeString(Styles.bgMagenta[0], Styles.bgMagenta[1]);
  let bgCyan = makeString(Styles.bgCyan[0], Styles.bgCyan[1]);
  let bgWhite = makeString(Styles.bgWhite[0], Styles.bgWhite[1]);
  let bgBlackBright =
    makeString(Styles.bgBlackBright[0], Styles.bgBlackBright[1]);
  let bgRedBright = makeString(Styles.bgRedBright[0], Styles.bgRedBright[1]);
  let bgGreenBright =
    makeString(Styles.bgGreenBright[0], Styles.bgGreenBright[1]);
  let bgYellowBright =
    makeString(Styles.bgYellowBright[0], Styles.bgYellowBright[1]);
  let bgBlueBright =
    makeString(Styles.bgBlueBright[0], Styles.bgBlueBright[1]);
  let bgMagentaBright =
    makeString(Styles.bgMagentaBright[0], Styles.bgMagentaBright[1]);
  let bgCyanBright =
    makeString(Styles.bgCyanBright[0], Styles.bgCyanBright[1]);
  let bgWhiteBright =
    makeString(Styles.bgWhiteBright[0], Styles.bgWhiteBright[1]);
};