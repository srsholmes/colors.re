open Styles;

let startWrap = v => {j|\u001b[$v|j} ++ "m";

let endWrap = v => {j|\u001b[$v|j} ++ "m";

let makeString = (style, str) => {
  let [head, last] = style;
  startWrap(head) ++ str ++ endWrap(last);
};

module Utils = {
  type t;
  let compose = (f, g, x) => f(g(x));
  let pipe = (f, g, x) => g(f(x));
  let reset = makeString(Styles.reset);
  let bold = makeString(Styles.bold);
  let dim = makeString(Styles.dim);
  let italic = makeString(Styles.italic);
  let underline = makeString(Styles.underline);
  let inverse = makeString(Styles.inverse);
  let hidden = makeString(Styles.hidden);
  let strikethrough = makeString(Styles.strikethrough);
  let black = makeString(Styles.black);
  let red = makeString(Styles.red);
  let green = makeString(Styles.green);
  let yellow = makeString(Styles.yellow);
  let blue = makeString(Styles.blue);
  let magenta = makeString(Styles.magenta);
  let cyan = makeString(Styles.cyan);
  let white = makeString(Styles.white);
  let gray = makeString(Styles.gray);
  let grey = makeString(Styles.grey);
  let bgBlack = makeString(Styles.bgBlack);
  let bgRed = makeString(Styles.bgRed);
  let bgGreen = makeString(Styles.bgGreen);
  let bgYellow = makeString(Styles.bgYellow);
  let bgBlue = makeString(Styles.bgBlue);
  let bgMagenta = makeString(Styles.bgMagenta);
  let bgCyan = makeString(Styles.bgCyan);
  let bgWhite = makeString(Styles.bgWhite);
  let bgBlackBright = makeString(Styles.bgBlackBright);
  let bgRedBright = makeString(Styles.bgRedBright);
  let bgGreenBright = makeString(Styles.bgGreenBright);
  let bgYellowBright = makeString(Styles.bgYellowBright);
  let bgBlueBright = makeString(Styles.bgBlueBright);
  let bgMagentaBright = makeString(Styles.bgMagentaBright);
  let bgCyanBright = makeString(Styles.bgCyanBright);
  let bgWhiteBright = makeString(Styles.bgWhiteBright);
};