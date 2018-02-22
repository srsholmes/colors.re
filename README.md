# colors.re

[![Build Status](https://travis-ci.org/srsholmes/colors.re.svg?branch=master)](https://travis-ci.org/srsholmes/colors.re)
[![Coverage Status](https://coveralls.io/repos/github/srsholmes/colors.re/badge.svg?branch=master)](https://coveralls.io/github/srsholmes/colors.re?branch=master)

Terminal utility to display colours in your terminal written in reasonml. Very much inspired from [Chalk](https://github.com/chalk/chalk) and [Colors.js](https://github.com/Marak/colors.js), go check them out.

## Usage:

```
let myString =
  colors(
    ~color=White,
    ~modifier=Bold,
    ~bg=BgBlueBright,
    ~keywordOptions={colorType: Green, word: "my"},
    "this is my string"
  );

Js.log(myString); // White text with blue background, with highlighted word "my" in Green
```

## Types:

```
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
```

## In Progress:

Support color detection.

## TODO:

* Unit Tests.
* Color conversions.
* 256/Truecolor support, need to finish support detection for this.
* Optimise performance.
* Publish to npm.
