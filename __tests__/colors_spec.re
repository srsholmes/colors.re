open Jest;

open Colors;

let () =
  describe(
    "colors.re",
    ExpectJs.(
      () => {
        test("colors should not modify by default", () =>
          expect(colors("start")) |> toBe("start")
        );
        test("colors should apply modifiers", () =>
          expect(colors(~modifier=Bold, "start"))
          |> toBe([%raw {| '\u001b[1m' + 'start' + '\u001b[22m' |}])
        );
        test("colors should apply color Red", () =>
          expect(colors(~color=Red, "Red"))
          |> toBe([%raw {| '\u001b[31m' + 'Red' + '\u001b[39m' |}])
        );
        test("colors should apply color Yellow", () =>
          expect(colors(~color=Yellow, "Yellow"))
          |> toBe([%raw {| '\u001b[33m' + 'Yellow' + '\u001b[39m' |}])
        );
        test("colors should apply color Green", () =>
          expect(colors(~color=Green, "Green"))
          |> toBe([%raw {| '\u001b[32m' + 'Green' + '\u001b[39m' |}])
        );
        test("colors should apply color Blue", () =>
          expect(colors(~color=Blue, "Blue"))
          |> toBe([%raw {| '\u001b[34m' + 'Blue' + '\u001b[39m' |}])
        );
        test("colors should apply color White", () =>
          expect(colors(~color=White, "White"))
          |> toBe([%raw {| '\u001b[37m' + 'White' + '\u001b[39m' |}])
        );
        test("colors should apply color Cyan", () =>
          expect(colors(~color=Cyan, "Cyan"))
          |> toBe([%raw {| '\u001b[36m' + 'Cyan' + '\u001b[39m' |}])
        );
        test("colors should apply color Magenta", () =>
          expect(colors(~color=Magenta, "Magenta"))
          |> toBe([%raw {| '\u001b[35m' + 'Magenta' + '\u001b[39m' |}])
        );
        test("colors should apply color BgBlack", () =>
          expect(colors(~color=BgBlack, "BgBlack"))
          |> toBe([%raw {| '\u001b[40m' + 'BgBlack' + '\u001b[49m' |}])
        );
        test("colors should apply color BgRed", () =>
          expect(colors(~color=BgRed, "BgRed"))
          |> toBe([%raw {| '\u001b[41m' + 'BgRed' + '\u001b[49m' |}])
        );
        test("colors should apply color BgGreen", () =>
          expect(colors(~color=BgGreen, "BgGreen"))
          |> toBe([%raw {| '\u001b[42m' + 'BgGreen' + '\u001b[49m' |}])
        );
        test("colors should apply color BgYellow", () =>
          expect(colors(~color=BgYellow, "BgYellow"))
          |> toBe([%raw {| '\u001b[43m' + 'BgYellow' + '\u001b[49m' |}])
        );
        test("colors should apply color BgBlue", () =>
          expect(colors(~color=BgBlue, "BgBlue"))
          |> toBe([%raw {| '\u001b[44m' + 'BgBlue' + '\u001b[49m' |}])
        );
        test("colors should apply color BgMagenta", () =>
          expect(colors(~color=BgMagenta, "BgMagenta"))
          |> toBe([%raw {| '\u001b[45m' + 'BgMagenta' + '\u001b[49m' |}])
        );
        test("colors should apply color BgCyan", () =>
          expect(colors(~color=BgCyan, "BgCyan"))
          |> toBe([%raw {| '\u001b[46m' + 'BgCyan' + '\u001b[49m' |}])
        );
        test("colors should apply color BgWhite", () =>
          expect(colors(~color=BgWhite, "BgWhite"))
          |> toBe([%raw {| '\u001b[47m' + 'BgWhite' + '\u001b[49m' |}])
        );
        test("colors should apply color BgRedBright", () =>
          expect(colors(~color=BgRedBright, "BgRedBright"))
          |> toBe([%raw {| '\u001b[101m' + 'BgRedBright' + '\u001b[49m' |}])
        );
        test("colors should apply color BgGreenBright", () =>
          expect(colors(~color=BgGreenBright, "BgGreenBright"))
          |> toBe([%raw {| '\u001b[102m' + 'BgGreenBright' + '\u001b[49m' |}])
        );
        test("colors should apply color BgYellowBright", () =>
          expect(colors(~color=BgYellowBright, "BgYellowBright"))
          |> toBe([%raw {| '\u001b[103m' + 'BgYellowBright' + '\u001b[49m' |}])
        );
        test("colors should apply color BgBlueBright", () =>
          expect(colors(~color=BgBlueBright, "BgBlueBright"))
          |> toBe([%raw {| '\u001b[104m' + 'BgBlueBright' + '\u001b[49m' |}])
        );
        test("colors should apply color BgMagentaBright", () =>
          expect(colors(~color=BgMagentaBright, "BgMagentaBright"))
          |> toBe([%raw {| '\u001b[105m' + 'BgMagentaBright' + '\u001b[49m' |}])
        );
        test("colors should apply color BgCyanBright", () =>
          expect(colors(~color=BgCyanBright, "BgCyanBright"))
          |> toBe([%raw {| '\u001b[106m' + 'BgCyanBright' + '\u001b[49m' |}])
        );
        test("colors should apply color BgWhiteBright", () =>
          expect(colors(~color=BgWhiteBright, "BgWhiteBright"))
          |> toBe([%raw {| '\u001b[107m' + 'BgWhiteBright' + '\u001b[49m' |}])
        );
        test("colors should apply backgrounds", () =>
          expect(colors(~bg=BgRed, "start"))
          |> toBe([%raw {| '\u001b[41m' + 'start' + '\u001b[49m' |}])
        );
        test("colors should hightlight keyword", () =>
          expect(
            colors(
              ~keywordOptions={colorType: Green, word: "World"},
              "Hello World"
            )
          )
          |> toBe(
               [%raw {| 'Hello ' + '\u001b[32m' + 'World' + '\u001b[39m' |}]
             )
        );
        test("colors should apply multiple changes to a string", () =>
          expect(colors(~bg=BgRed, ~color=Blue, "start"))
          |> toBe(
               [%raw
                 {| '\u001b[41m' + '\u001b[34m' + 'start' + '\u001b[39m' + '\u001b[49m' |}
               ]
             )
        );
      }
    )
  );