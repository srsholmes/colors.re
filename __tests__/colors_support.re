open Jest;

open Colors_Support;

let () =
  describe(
    "colors.re Colors_Support",
    ExpectJs.(
      () => {
        test("supportsColors", () =>
          expect(supportsColors([1, 2, 3])) |> toBe(3)
        );
        test("notFoundString", () =>
          expect(notFoundStr) |> toBe("NOT_FOUND")
        );
        test("safeGetEnv", () =>
          expect(safeGetEnv("SOME_RUBBISH_ENV")) |> toBe("NOT_FOUND")
        );
      }
    )
  );