open Colors_Styles;

let startWrap = v => {j|\u001b[$v|j} ++ "m";

let endWrap = v => {j|\u001b[$v|j} ++ "m";

let wrap = ([head, last], str) => startWrap(head) ++ str ++ endWrap(last);

module Colors_Utils = {
  type t;
  let compose = (f, g, x) => f(g(x));
  let pipe = (f, g, x) => g(f(x));
  let reset = wrap(Colors_Styles.reset);
  let bold = wrap(Colors_Styles.bold);
  let dim = wrap(Colors_Styles.dim);
  let italic = wrap(Colors_Styles.italic);
  let underline = wrap(Colors_Styles.underline);
  let inverse = wrap(Colors_Styles.inverse);
  let hidden = wrap(Colors_Styles.hidden);
  let strikethrough = wrap(Colors_Styles.strikethrough);
  let black = wrap(Colors_Styles.black);
  let red = wrap(Colors_Styles.red);
  let green = wrap(Colors_Styles.green);
  let yellow = wrap(Colors_Styles.yellow);
  let blue = wrap(Colors_Styles.blue);
  let magenta = wrap(Colors_Styles.magenta);
  let cyan = wrap(Colors_Styles.cyan);
  let white = wrap(Colors_Styles.white);
  let gray = wrap(Colors_Styles.gray);
  let grey = wrap(Colors_Styles.grey);
  let bgBlack = wrap(Colors_Styles.bgBlack);
  let bgRed = wrap(Colors_Styles.bgRed);
  let bgGreen = wrap(Colors_Styles.bgGreen);
  let bgYellow = wrap(Colors_Styles.bgYellow);
  let bgBlue = wrap(Colors_Styles.bgBlue);
  let bgMagenta = wrap(Colors_Styles.bgMagenta);
  let bgCyan = wrap(Colors_Styles.bgCyan);
  let bgWhite = wrap(Colors_Styles.bgWhite);
  let bgBlackBright = wrap(Colors_Styles.bgBlackBright);
  let bgRedBright = wrap(Colors_Styles.bgRedBright);
  let bgGreenBright = wrap(Colors_Styles.bgGreenBright);
  let bgYellowBright = wrap(Colors_Styles.bgYellowBright);
  let bgBlueBright = wrap(Colors_Styles.bgBlueBright);
  let bgMagentaBright = wrap(Colors_Styles.bgMagentaBright);
  let bgCyanBright = wrap(Colors_Styles.bgCyanBright);
  let bgWhiteBright = wrap(Colors_Styles.bgWhiteBright);
};