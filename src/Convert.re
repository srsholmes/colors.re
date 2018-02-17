let convertToHexidecimal = num => {
  let convert = Printf.sprintf("%x", num);
  String.length(convert) == 1 ? "0" ++ convert : convert;
};

module Convert = {
  module RGB = {
    let hex = rgb => {
      let [r, g, b] = rgb;
      let str =
        "#"
        ++ convertToHexidecimal(r)
        ++ convertToHexidecimal(g)
        ++ convertToHexidecimal(b);
      str;
    };
  };
};

let convertTest = Convert.RGB.hex([0, 100, 0]);

Js.log(convertTest);