# Recolor

Console colours for your terminal in reasonml. Inspired by [Chalk](https://github.com/chalk/chalk) and [Colors.js](https://github.com/Marak/colors.js), go check them out.

## Usage:

```
let myString =
  recolor(
    ~color=Yellow,
    ~modifier=Bold,
    ~bg=Blue,
    ~keywordOptions={colorType: Green, word: "my"},
    "this is my string"
  );

Js.log(myString);
```

# Build

```
npm run build
```

# Build + Watch

```
npm run watch
```
