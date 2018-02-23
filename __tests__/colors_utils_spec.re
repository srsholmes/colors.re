open Jest;

open Colors_Utils;

let () =
  describe(
    "colors.re Colors_Utils and Styles",
    ExpectJs.(
      () => {
        test("startWrap", () =>
          expect(startWrap("start")) |> toBe({j|\u001b[start|j} ++ "m")
        );
        test("endWrap", () =>
          expect(endWrap("end")) |> toBe({j|\u001b[end|j} ++ "m")
        );
        test("bold", () =>
          expect(Colors_Utils.bold("bold"))
          |> toBe([%raw {| '\u001b[1m' + 'bold' + '\u001b[22m' |}])
        );
        test("italic", () =>
          expect(Colors_Utils.italic("test"))
          |> toBe([%raw {| '\u001b[3m' + 'test' + '\u001b[23m' |}])
        );
        test("underline", () =>
          expect(Colors_Utils.underline("test"))
          |> toBe([%raw {| '\u001b[4m' + 'test' + '\u001b[24m' |}])
        );
        test("inverse", () =>
          expect(Colors_Utils.inverse("test"))
          |> toBe([%raw {| '\u001b[7m' + 'test' + '\u001b[27m' |}])
        );
        test("hidden", () =>
          expect(Colors_Utils.hidden("test"))
          |> toBe([%raw {| '\u001b[8m' + 'test' + '\u001b[28m' |}])
        );
        test("strikethrough", () =>
          expect(Colors_Utils.strikethrough("test"))
          |> toBe([%raw {| '\u001b[9m' + 'test' + '\u001b[29m' |}])
        );
        test("black", () =>
          expect(Colors_Utils.black("test"))
          |> toBe([%raw {| '\u001b[30m' + 'test' + '\u001b[39m' |}])
        );
        test("red", () =>
          expect(Colors_Utils.red("test"))
          |> toBe([%raw {| '\u001b[31m' + 'test' + '\u001b[39m' |}])
        );
        test("green", () =>
          expect(Colors_Utils.green("test"))
          |> toBe([%raw {| '\u001b[32m' + 'test' + '\u001b[39m' |}])
        );
        test("yellow", () =>
          expect(Colors_Utils.yellow("test"))
          |> toBe([%raw {| '\u001b[33m' + 'test' + '\u001b[39m' |}])
        );
        test("blue", () =>
          expect(Colors_Utils.blue("test"))
          |> toBe([%raw {| '\u001b[34m' + 'test' + '\u001b[39m' |}])
        );
        test("magenta", () =>
          expect(Colors_Utils.magenta("test"))
          |> toBe([%raw {| '\u001b[35m' + 'test' + '\u001b[39m' |}])
        );
        test("cyan", () =>
          expect(Colors_Utils.cyan("test"))
          |> toBe([%raw {| '\u001b[36m' + 'test' + '\u001b[39m' |}])
        );
        test("white", () =>
          expect(Colors_Utils.white("test"))
          |> toBe([%raw {| '\u001b[37m' + 'test' + '\u001b[39m' |}])
        );
        test("gray", () =>
          expect(Colors_Utils.gray("test"))
          |> toBe([%raw {| '\u001b[90m' + 'test' + '\u001b[39m' |}])
        );
        test("grey", () =>
          expect(Colors_Utils.grey("test"))
          |> toBe([%raw {| '\u001b[90m' + 'test' + '\u001b[39m' |}])
        );
        test("bgBlack", () =>
          expect(Colors_Utils.bgBlack("test"))
          |> toBe([%raw {| '\u001b[40m' + 'test' + '\u001b[49m' |}])
        );
        test("bgRed", () =>
          expect(Colors_Utils.bgRed("test"))
          |> toBe([%raw {| '\u001b[41m' + 'test' + '\u001b[49m' |}])
        );
        test("bgGreen", () =>
          expect(Colors_Utils.bgGreen("test"))
          |> toBe([%raw {| '\u001b[42m' + 'test' + '\u001b[49m' |}])
        );
        test("bgYellow", () =>
          expect(Colors_Utils.bgYellow("test"))
          |> toBe([%raw {| '\u001b[43m' + 'test' + '\u001b[49m' |}])
        );
        test("bgBlue", () =>
          expect(Colors_Utils.bgBlue("test"))
          |> toBe([%raw {| '\u001b[44m' + 'test' + '\u001b[49m' |}])
        );
        test("bgMagenta", () =>
          expect(Colors_Utils.bgMagenta("test"))
          |> toBe([%raw {| '\u001b[45m' + 'test' + '\u001b[49m' |}])
        );
        test("bgCyan", () =>
          expect(Colors_Utils.bgCyan("test"))
          |> toBe([%raw {| '\u001b[46m' + 'test' + '\u001b[49m' |}])
        );
        test("bgWhite", () =>
          expect(Colors_Utils.bgWhite("test"))
          |> toBe([%raw {| '\u001b[47m' + 'test' + '\u001b[49m' |}])
        );
        test("bgBlackBright", () =>
          expect(Colors_Utils.bgBlackBright("test"))
          |> toBe([%raw {| '\u001b[100m' + 'test' + '\u001b[49m' |}])
        );
        test("bgRedBright", () =>
          expect(Colors_Utils.bgRedBright("test"))
          |> toBe([%raw {| '\u001b[101m' + 'test' + '\u001b[49m' |}])
        );
        test("bgGreenBright", () =>
          expect(Colors_Utils.bgGreenBright("test"))
          |> toBe([%raw {| '\u001b[102m' + 'test' + '\u001b[49m' |}])
        );
        test("bgYellowBright", () =>
          expect(Colors_Utils.bgYellowBright("test"))
          |> toBe([%raw {| '\u001b[103m' + 'test' + '\u001b[49m' |}])
        );
        test("bgBlueBright", () =>
          expect(Colors_Utils.bgBlueBright("test"))
          |> toBe([%raw {| '\u001b[104m' + 'test' + '\u001b[49m' |}])
        );
        test("bgMagentaBright", () =>
          expect(Colors_Utils.bgMagentaBright("test"))
          |> toBe([%raw {| '\u001b[105m' + 'test' + '\u001b[49m' |}])
        );
        test("bgCyanBright", () =>
          expect(Colors_Utils.bgCyanBright("test"))
          |> toBe([%raw {| '\u001b[106m' + 'test' + '\u001b[49m' |}])
        );
        test("bgWhiteBright", () =>
          expect(Colors_Utils.bgWhiteBright("test"))
          |> toBe([%raw {| '\u001b[107m' + 'test' + '\u001b[49m' |}])
        );
      }
    )
  );