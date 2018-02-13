# Recolor

Console colours for your terminal in reasonml. Inspired by [Chalk](https://github.com/chalk/chalk) and [Colors.js](https://github.com/Marak/colors.js), go check them out.

## Usage:

```
let log = Js.log;

let (<<) = Recolor.compose;

let (>>) = Recolor.pipe;

let myString = Recolor.bold("My Bold String");

log(myString);

let composedStyle = Recolor.bold << Recolor.blue << Recolor.underline;

log(composedStyle("This string will be bold, blue and underlined"));
```

# Build

```
npm run build
```

# Build + Watch

```
npm run watch
```
