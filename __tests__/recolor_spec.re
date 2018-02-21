open Jest;

open Colors;

describe("Expect", () =>
  Expect.(test("toBe", () =>
            expect(1 + 2) |> toBe(3)
          ))
);