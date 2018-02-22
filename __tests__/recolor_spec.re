open Jest;

open Utils;

let () =
  describe(
    "colors.re Utils and Styles",
    ExpectJs.(
      () => {
        test("startWrap", () =>
          expect(startWrap("start")) |> toBe({j|\u001b[start|j} ++ "m")
        );
        test("endWrap", () =>
          expect(endWrap("end")) |> toBe({j|\u001b[end|j} ++ "m")
        );
        test("bold", () =>
          expect(Utils.bold("bold"))
          |> toBe(startWrap("1") ++ "bold" ++ endWrap("22"))
        );
        test("italic", () =>
          expect(Utils.italic("test"))
          |> toBe(startWrap("3") ++ "test" ++ endWrap("23"))
        );
        test("underline", () =>
          expect(Utils.underline("test"))
          |> toBe(startWrap("4") ++ "test" ++ endWrap("24"))
        );
        test("inverse", () =>
          expect(Utils.inverse("test"))
          |> toBe(startWrap("7") ++ "test" ++ endWrap("27"))
        );
        test("hidden", () =>
          expect(Utils.hidden("test"))
          |> toBe(startWrap("8") ++ "test" ++ endWrap("28"))
        );
        test("strikethrough", () =>
          expect(Utils.strikethrough("test"))
          |> toBe(startWrap("9") ++ "test" ++ endWrap("29"))
        );
        test("black", () =>
          expect(Utils.black("test"))
          |> toBe(startWrap("30") ++ "test" ++ endWrap("39"))
        );
        test("red", () =>
          expect(Utils.red("test"))
          |> toBe(startWrap("31") ++ "test" ++ endWrap("39"))
        );
        test("green", () =>
          expect(Utils.green("test"))
          |> toBe(startWrap("32") ++ "test" ++ endWrap("39"))
        );
        test("yellow", () =>
          expect(Utils.yellow("test"))
          |> toBe(startWrap("33") ++ "test" ++ endWrap("39"))
        );
        test("blue", () =>
          expect(Utils.blue("test"))
          |> toBe(startWrap("34") ++ "test" ++ endWrap("39"))
        );
        test("magenta", () =>
          expect(Utils.magenta("test"))
          |> toBe(startWrap("35") ++ "test" ++ endWrap("39"))
        );
        test("cyan", () =>
          expect(Utils.cyan("test"))
          |> toBe(startWrap("36") ++ "test" ++ endWrap("39"))
        );
        test("white", () =>
          expect(Utils.white("test"))
          |> toBe(startWrap("37") ++ "test" ++ endWrap("39"))
        );
        test("gray", () =>
          expect(Utils.gray("test"))
          |> toBe(startWrap("90") ++ "test" ++ endWrap("39"))
        );
        test("grey", () =>
          expect(Utils.grey("test"))
          |> toBe(startWrap("90") ++ "test" ++ endWrap("39"))
        );
        test("bgBlack", () =>
          expect(Utils.bgBlack("test"))
          |> toBe(startWrap("40") ++ "test" ++ endWrap("49"))
        );
        test("bgRed", () =>
          expect(Utils.bgRed("test"))
          |> toBe(startWrap("41") ++ "test" ++ endWrap("49"))
        );
        test("bgGreen", () =>
          expect(Utils.bgGreen("test"))
          |> toBe(startWrap("42") ++ "test" ++ endWrap("49"))
        );
        test("bgYellow", () =>
          expect(Utils.bgYellow("test"))
          |> toBe(startWrap("43") ++ "test" ++ endWrap("49"))
        );
        test("bgBlue", () =>
          expect(Utils.bgBlue("test"))
          |> toBe(startWrap("44") ++ "test" ++ endWrap("49"))
        );
        test("bgMagenta", () =>
          expect(Utils.bgMagenta("test"))
          |> toBe(startWrap("45") ++ "test" ++ endWrap("49"))
        );
        test("bgCyan", () =>
          expect(Utils.bgCyan("test"))
          |> toBe(startWrap("46") ++ "test" ++ endWrap("49"))
        );
        test("bgWhite", () =>
          expect(Utils.bgWhite("test"))
          |> toBe(startWrap("47") ++ "test" ++ endWrap("49"))
        );
        test("bgBlackBright", () =>
          expect(Utils.bgBlackBright("test"))
          |> toBe(startWrap("100") ++ "test" ++ endWrap("49"))
        );
        test("bgRedBright", () =>
          expect(Utils.bgRedBright("test"))
          |> toBe(startWrap("101") ++ "test" ++ endWrap("49"))
        );
        test("bgGreenBright", () =>
          expect(Utils.bgGreenBright("test"))
          |> toBe(startWrap("102") ++ "test" ++ endWrap("49"))
        );
        test("bgYellowBright", () =>
          expect(Utils.bgYellowBright("test"))
          |> toBe(startWrap("103") ++ "test" ++ endWrap("49"))
        );
        test("bgBlueBright", () =>
          expect(Utils.bgBlueBright("test"))
          |> toBe(startWrap("104") ++ "test" ++ endWrap("49"))
        );
        test("bgMagentaBright", () =>
          expect(Utils.bgMagentaBright("test"))
          |> toBe(startWrap("105") ++ "test" ++ endWrap("49"))
        );
        test("bgCyanBright", () =>
          expect(Utils.bgCyanBright("test"))
          |> toBe(startWrap("106") ++ "test" ++ endWrap("49"))
        );
        test("bgWhiteBright", () =>
          expect(Utils.bgWhiteBright("test"))
          |> toBe(startWrap("107") ++ "test" ++ endWrap("49"))
        );
      }
    )
  );