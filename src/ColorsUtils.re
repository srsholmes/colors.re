open Styles;

let startWrap = v => {j|\u001b[$v|j} ++ "m";

let endWrap = v => {j|\u001b[$v|j} ++ "m";

let wrap = ([head, last], str) => startWrap(head) ++ str ++ endWrap(last);

module ColorsUtils = {
  type t;
  let compose = (f, g, x) => f(g(x));
  let pipe = (f, g, x) => g(f(x));
  let reset = wrap(Styles.reset);
  let bold = wrap(Styles.bold);
  let dim = wrap(Styles.dim);
  let italic = wrap(Styles.italic);
  let underline = wrap(Styles.underline);
  let inverse = wrap(Styles.inverse);
  let hidden = wrap(Styles.hidden);
  let strikethrough = wrap(Styles.strikethrough);
  let black = wrap(Styles.black);
  let red = wrap(Styles.red);
  let green = wrap(Styles.green);
  let yellow = wrap(Styles.yellow);
  let blue = wrap(Styles.blue);
  let magenta = wrap(Styles.magenta);
  let cyan = wrap(Styles.cyan);
  let white = wrap(Styles.white);
  let gray = wrap(Styles.gray);
  let grey = wrap(Styles.grey);
  let bgBlack = wrap(Styles.bgBlack);
  let bgRed = wrap(Styles.bgRed);
  let bgGreen = wrap(Styles.bgGreen);
  let bgYellow = wrap(Styles.bgYellow);
  let bgBlue = wrap(Styles.bgBlue);
  let bgMagenta = wrap(Styles.bgMagenta);
  let bgCyan = wrap(Styles.bgCyan);
  let bgWhite = wrap(Styles.bgWhite);
  let bgBlackBright = wrap(Styles.bgBlackBright);
  let bgRedBright = wrap(Styles.bgRedBright);
  let bgGreenBright = wrap(Styles.bgGreenBright);
  let bgYellowBright = wrap(Styles.bgYellowBright);
  let bgBlueBright = wrap(Styles.bgBlueBright);
  let bgMagentaBright = wrap(Styles.bgMagentaBright);
  let bgCyanBright = wrap(Styles.bgCyanBright);
  let bgWhiteBright = wrap(Styles.bgWhiteBright);
};