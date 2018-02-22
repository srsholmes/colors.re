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
          |> toBe([%raw {| '\u001b[1m' + 'bold' + '\u001b[22m' |}])
        );
        test("italic", () =>
          expect(Utils.italic("test"))
          |> toBe([%raw {| '\u001b[3m' + 'test' + '\u001b[23m' |}])
        );
        test("underline", () =>
          expect(Utils.underline("test"))
          |> toBe([%raw {| '\u001b[4m' + 'test' + '\u001b[24m' |}])
        );
        test("inverse", () =>
          expect(Utils.inverse("test"))
          |> toBe([%raw {| '\u001b[7m' + 'test' + '\u001b[27m' |}])
        );
        test("hidden", () =>
          expect(Utils.hidden("test"))
          |> toBe([%raw {| '\u001b[8m' + 'test' + '\u001b[28m' |}])
        );
        test("strikethrough", () =>
          expect(Utils.strikethrough("test"))
          |> toBe([%raw {| '\u001b[9m' + 'test' + '\u001b[29m' |}])
        );
        test("black", () =>
          expect(Utils.black("test"))
          |> toBe([%raw {| '\u001b[30m' + 'test' + '\u001b[39m' |}])
        );
        test("red", () =>
          expect(Utils.red("test"))
          |> toBe([%raw {| '\u001b[31m' + 'test' + '\u001b[39m' |}])
        );
        test("green", () =>
          expect(Utils.green("test"))
          |> toBe([%raw {| '\u001b[32m' + 'test' + '\u001b[39m' |}])
        );
        test("yellow", () =>
          expect(Utils.yellow("test"))
          |> toBe([%raw {| '\u001b[33m' + 'test' + '\u001b[39m' |}])
        );
        test("blue", () =>
          expect(Utils.blue("test"))
          |> toBe([%raw {| '\u001b[34m' + 'test' + '\u001b[39m' |}])
        );
        test("magenta", () =>
          expect(Utils.magenta("test"))
          |> toBe([%raw {| '\u001b[35m' + 'test' + '\u001b[39m' |}])
        );
        test("cyan", () =>
          expect(Utils.cyan("test"))
          |> toBe([%raw {| '\u001b[36m' + 'test' + '\u001b[39m' |}])
        );
        test("white", () =>
          expect(Utils.white("test"))
          |> toBe([%raw {| '\u001b[37m' + 'test' + '\u001b[39m' |}])
        );
        test("gray", () =>
          expect(Utils.gray("test"))
          |> toBe([%raw {| '\u001b[90m' + 'test' + '\u001b[39m' |}])
        );
        test("grey", () =>
          expect(Utils.grey("test"))
          |> toBe([%raw {| '\u001b[90m' + 'test' + '\u001b[39m' |}])
        );
        test("bgBlack", () =>
          expect(Utils.bgBlack("test"))
          |> toBe([%raw {| '\u001b[40m' + 'test' + '\u001b[49m' |}])
        );
        test("bgRed", () =>
          expect(Utils.bgRed("test"))
          |> toBe([%raw {| '\u001b[41m' + 'test' + '\u001b[49m' |}])
        );
        test("bgGreen", () =>
          expect(Utils.bgGreen("test"))
          |> toBe([%raw {| '\u001b[42m' + 'test' + '\u001b[49m' |}])
        );
        test("bgYellow", () =>
          expect(Utils.bgYellow("test"))
          |> toBe([%raw {| '\u001b[43m' + 'test' + '\u001b[49m' |}])
        );
        test("bgBlue", () =>
          expect(Utils.bgBlue("test"))
          |> toBe([%raw {| '\u001b[44m' + 'test' + '\u001b[49m' |}])
        );
        test("bgMagenta", () =>
          expect(Utils.bgMagenta("test"))
          |> toBe([%raw {| '\u001b[45m' + 'test' + '\u001b[49m' |}])
        );
        test("bgCyan", () =>
          expect(Utils.bgCyan("test"))
          |> toBe([%raw {| '\u001b[46m' + 'test' + '\u001b[49m' |}])
        );
        test("bgWhite", () =>
          expect(Utils.bgWhite("test"))
          |> toBe([%raw {| '\u001b[47m' + 'test' + '\u001b[49m' |}])
        );
        test("bgBlackBright", () =>
          expect(Utils.bgBlackBright("test"))
          |> toBe([%raw {| '\u001b[100m' + 'test' + '\u001b[49m' |}])
        );
        test("bgRedBright", () =>
          expect(Utils.bgRedBright("test"))
          |> toBe([%raw {| '\u001b[101m' + 'test' + '\u001b[49m' |}])
        );
        test("bgGreenBright", () =>
          expect(Utils.bgGreenBright("test"))
          |> toBe([%raw {| '\u001b[102m' + 'test' + '\u001b[49m' |}])
        );
        test("bgYellowBright", () =>
          expect(Utils.bgYellowBright("test"))
          |> toBe([%raw {| '\u001b[103m' + 'test' + '\u001b[49m' |}])
        );
        test("bgBlueBright", () =>
          expect(Utils.bgBlueBright("test"))
          |> toBe([%raw {| '\u001b[104m' + 'test' + '\u001b[49m' |}])
        );
        test("bgMagentaBright", () =>
          expect(Utils.bgMagentaBright("test"))
          |> toBe([%raw {| '\u001b[105m' + 'test' + '\u001b[49m' |}])
        );
        test("bgCyanBright", () =>
          expect(Utils.bgCyanBright("test"))
          |> toBe([%raw {| '\u001b[106m' + 'test' + '\u001b[49m' |}])
        );
        test("bgWhiteBright", () =>
          expect(Utils.bgWhiteBright("test"))
          |> toBe([%raw {| '\u001b[107m' + 'test' + '\u001b[49m' |}])
        );
      }
    )
  );