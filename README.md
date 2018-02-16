# Recolor

Console colours for your terminal in reasonml. Inspired by [Chalk](https://github.com/chalk/chalk) and [Colors.js](https://github.com/Marak/colors.js), go check them out.

## Usage:

```
let myString =
  recolor(
    ~color=Red,
    ~modifier=Bold,
    ~keywordOptions={colorType: Blue, word: "my"},
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
