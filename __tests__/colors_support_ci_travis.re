open Jest;

let () =
  describe(
    "colors.re Colors_Support",
    ExpectJs.(
      () =>
        test("isColorCompatibleCi returns 1 if TRAVIS CI", () => {
          [%raw {| process.env={"CI":"TRAVIS"}|}];
          [%raw {| console.log(process.env)|}];
          Colors_Support.(expect(isColorCompatibleCi()) |> toBe(1));
        })
    )
  );