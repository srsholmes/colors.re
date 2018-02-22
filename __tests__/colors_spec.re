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
        test("colors should apply colors", () =>
          expect(colors(~color=Red, "start"))
          |> toBe([%raw {| '\u001b[31m' + 'start' + '\u001b[39m' |}])
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