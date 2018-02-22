open Jest;

open ColorsUtils;

let () =
  describe(
    "colors.re ColorsUtils and Styles",
    ExpectJs.(
      () => {
        test("startWrap", () =>
          expect(startWrap("start")) |> toBe({j|\u001b[start|j} ++ "m")
        );
        test("endWrap", () =>
          expect(endWrap("end")) |> toBe({j|\u001b[end|j} ++ "m")
        );
        test("bold", () =>
          expect(ColorsUtils.bold("bold"))
          |> toBe([%raw {| '\u001b[1m' + 'bold' + '\u001b[22m' |}])
        );
        test("italic", () =>
          expect(ColorsUtils.italic("test"))
          |> toBe([%raw {| '\u001b[3m' + 'test' + '\u001b[23m' |}])
        );
        test("underline", () =>
          expect(ColorsUtils.underline("test"))
          |> toBe([%raw {| '\u001b[4m' + 'test' + '\u001b[24m' |}])
        );
        test("inverse", () =>
          expect(ColorsUtils.inverse("test"))
          |> toBe([%raw {| '\u001b[7m' + 'test' + '\u001b[27m' |}])
        );
        test("hidden", () =>
          expect(ColorsUtils.hidden("test"))
          |> toBe([%raw {| '\u001b[8m' + 'test' + '\u001b[28m' |}])
        );
        test("strikethrough", () =>
          expect(ColorsUtils.strikethrough("test"))
          |> toBe([%raw {| '\u001b[9m' + 'test' + '\u001b[29m' |}])
        );
        test("black", () =>
          expect(ColorsUtils.black("test"))
          |> toBe([%raw {| '\u001b[30m' + 'test' + '\u001b[39m' |}])
        );
        test("red", () =>
          expect(ColorsUtils.red("test"))
          |> toBe([%raw {| '\u001b[31m' + 'test' + '\u001b[39m' |}])
        );
        test("green", () =>
          expect(ColorsUtils.green("test"))
          |> toBe([%raw {| '\u001b[32m' + 'test' + '\u001b[39m' |}])
        );
        test("yellow", () =>
          expect(ColorsUtils.yellow("test"))
          |> toBe([%raw {| '\u001b[33m' + 'test' + '\u001b[39m' |}])
        );
        test("blue", () =>
          expect(ColorsUtils.blue("test"))
          |> toBe([%raw {| '\u001b[34m' + 'test' + '\u001b[39m' |}])
        );
        test("magenta", () =>
          expect(ColorsUtils.magenta("test"))
          |> toBe([%raw {| '\u001b[35m' + 'test' + '\u001b[39m' |}])
        );
        test("cyan", () =>
          expect(ColorsUtils.cyan("test"))
          |> toBe([%raw {| '\u001b[36m' + 'test' + '\u001b[39m' |}])
        );
        test("white", () =>
          expect(ColorsUtils.white("test"))
          |> toBe([%raw {| '\u001b[37m' + 'test' + '\u001b[39m' |}])
        );
        test("gray", () =>
          expect(ColorsUtils.gray("test"))
          |> toBe([%raw {| '\u001b[90m' + 'test' + '\u001b[39m' |}])
        );
        test("grey", () =>
          expect(ColorsUtils.grey("test"))
          |> toBe([%raw {| '\u001b[90m' + 'test' + '\u001b[39m' |}])
        );
        test("bgBlack", () =>
          expect(ColorsUtils.bgBlack("test"))
          |> toBe([%raw {| '\u001b[40m' + 'test' + '\u001b[49m' |}])
        );
        test("bgRed", () =>
          expect(ColorsUtils.bgRed("test"))
          |> toBe([%raw {| '\u001b[41m' + 'test' + '\u001b[49m' |}])
        );
        test("bgGreen", () =>
          expect(ColorsUtils.bgGreen("test"))
          |> toBe([%raw {| '\u001b[42m' + 'test' + '\u001b[49m' |}])
        );
        test("bgYellow", () =>
          expect(ColorsUtils.bgYellow("test"))
          |> toBe([%raw {| '\u001b[43m' + 'test' + '\u001b[49m' |}])
        );
        test("bgBlue", () =>
          expect(ColorsUtils.bgBlue("test"))
          |> toBe([%raw {| '\u001b[44m' + 'test' + '\u001b[49m' |}])
        );
        test("bgMagenta", () =>
          expect(ColorsUtils.bgMagenta("test"))
          |> toBe([%raw {| '\u001b[45m' + 'test' + '\u001b[49m' |}])
        );
        test("bgCyan", () =>
          expect(ColorsUtils.bgCyan("test"))
          |> toBe([%raw {| '\u001b[46m' + 'test' + '\u001b[49m' |}])
        );
        test("bgWhite", () =>
          expect(ColorsUtils.bgWhite("test"))
          |> toBe([%raw {| '\u001b[47m' + 'test' + '\u001b[49m' |}])
        );
        test("bgBlackBright", () =>
          expect(ColorsUtils.bgBlackBright("test"))
          |> toBe([%raw {| '\u001b[100m' + 'test' + '\u001b[49m' |}])
        );
        test("bgRedBright", () =>
          expect(ColorsUtils.bgRedBright("test"))
          |> toBe([%raw {| '\u001b[101m' + 'test' + '\u001b[49m' |}])
        );
        test("bgGreenBright", () =>
          expect(ColorsUtils.bgGreenBright("test"))
          |> toBe([%raw {| '\u001b[102m' + 'test' + '\u001b[49m' |}])
        );
        test("bgYellowBright", () =>
          expect(ColorsUtils.bgYellowBright("test"))
          |> toBe([%raw {| '\u001b[103m' + 'test' + '\u001b[49m' |}])
        );
        test("bgBlueBright", () =>
          expect(ColorsUtils.bgBlueBright("test"))
          |> toBe([%raw {| '\u001b[104m' + 'test' + '\u001b[49m' |}])
        );
        test("bgMagentaBright", () =>
          expect(ColorsUtils.bgMagentaBright("test"))
          |> toBe([%raw {| '\u001b[105m' + 'test' + '\u001b[49m' |}])
        );
        test("bgCyanBright", () =>
          expect(ColorsUtils.bgCyanBright("test"))
          |> toBe([%raw {| '\u001b[106m' + 'test' + '\u001b[49m' |}])
        );
        test("bgWhiteBright", () =>
          expect(ColorsUtils.bgWhiteBright("test"))
          |> toBe([%raw {| '\u001b[107m' + 'test' + '\u001b[49m' |}])
        );
      }
    )
  );