open Jest;

open Colors_Support;

let () =
  describe(
    "colors.re Colors_Support",
    ExpectJs.(
      () => {
        test("supportsColors", () =>
          expect(findMax([1, 2, 3])) |> toBe(3)
        );
        test("notFoundString", () =>
          expect(notFoundStr) |> toBe("NOT_FOUND")
        );
        test("safeGetEnv", () =>
          expect(safeGetEnv("SOME_RUBBISH_ENV")) |> toBe("NOT_FOUND")
        );
        test("isColorCompatibleCi returns 1 if TRAVIS CI", () => {
          [%raw {| process.env.CI = 'TRAVIS'|}];
          expect(isColorCompatibleCi()) |> toBe(1);
        });
        test("isColorCompatibleCi returns 1 if CIRCLE CI", () => {
          [%raw {| process.env.CI = 'CIRCLECI' |}];
          expect(isColorCompatibleCi()) |> toBe(1);
        });
        test("isColorCompatibleCi returns 1 if APPVEYOR CI", () => {
          [%raw {| process.env.CI = 'APPVEYOR' |}];
          expect(isColorCompatibleCi()) |> toBe(1);
        });
        test("isColorCompatibleCi returns 1 if GITLAB_CI CI", () => {
          [%raw {| process.env.CI = 'GITLAB_CI' |}];
          expect(isColorCompatibleCi()) |> toBe(1);
        });
        test("isColorCompatibleCi returns 1 if codeship CI", () => {
          [%raw {| process.env.CI_NAME = 'codeship' |}];
          [%raw {| process.env.CI = 'true' |}];
          expect(isColorCompatibleCi()) |> toBe(1);
        });
        test("isTeamCityCompatible returns 0 if old version", () => {
          [%raw {| process.env.TEAMCITY_VERSION = '9.0.5 (build 32523)'|}];
          expect(isTeamCityCompatible()) |> toBe(0);
        });
        test("isTeamCityCompatible returns 1 if newer version", () => {
          [%raw {| process.env.TEAMCITY_VERSION = '9.1.5 (build 32523)'|}];
          expect(isTeamCityCompatible()) |> toBe(1);
        });
        test("isColorTerm returns 0 if NO COLORTERM", () => {
          [%raw {| delete process.env.COLORTERM |}];
          expect(isColorTerm()) |> toBe(0);
        });
        test("isColorTerm returns 1 if COLORTERM", () => {
          [%raw {| process.env.COLORTERM = 'true'|}];
          expect(isColorTerm()) |> toBe(1);
        });
        test("isBasicTerm returns 0 if NO TERM", () => {
          [%raw {| delete process.env.TERM |}];
          expect(isBasicTerminal()) |> toBe(0);
        });
        test("isBasicTerm returns 1 if TERM is recognised terminal", () => {
          [%raw {| process.env.TERM = 'xterm'|}];
          expect(isBasicTerminal()) |> toBe(1);
        });
        test("isBasicTerm returns 0 if TERM is not recognised terminal", () => {
          [%raw {| process.env.TERM = 'blah'|}];
          expect(isBasicTerminal()) |> toBe(0);
        });
        test("isTerminal256 returns 1 if TERM is recognised terminal", () => {
          [%raw {| process.env.TERM = 'blah-256'|}];
          expect(isTerminal256()) |> toBe(2);
        });
        test("isTerminal256 returns 0 if TERM is recognised terminal", () => {
          [%raw {| process.env.TERM = 'blah-156'|}];
          expect(isTerminal256()) |> toBe(0);
        });
        test("isTerminal256 returns 0 if NO TERM", () => {
          [%raw {| delete process.env.TERM |}];
          expect(isTerminal256()) |> toBe(0);
        });
        test(
          "isFancyTerminal returns 3 if TERM_PROGRAM_VERSION is iTerm 3", () => {
          [%raw {| delete process.env.TERM_PROGRAM |}];
          [%raw {| delete process.env.TERM_PROGRAM_VERSION |}];
          [%raw {| process.env.TERM_PROGRAM = 'iTerm.app'|}];
          [%raw {| process.env.TERM_PROGRAM_VERSION = '3.1.0'|}];
          expect(isFancyTerminal()) |> toBe(3);
        });
        test(
          "isFancyTerminal returns 2 if TERM_PROGRAM_VERSION is iTerm 2", () => {
          [%raw {| delete process.env.TERM_PROGRAM |}];
          [%raw {| delete process.env.TERM_PROGRAM_VERSION |}];
          [%raw {| process.env.TERM_PROGRAM = 'iTerm.app'|}];
          [%raw {| process.env.TERM_PROGRAM_VERSION = '2.0.0'|}];
          expect(isFancyTerminal()) |> toBe(2);
        });
        test("isFancyTerminal returns 3 if TERM_PROGRAM_VERSION is Hyper", () => {
          [%raw {| delete process.env.TERM_PROGRAM |}];
          [%raw {| delete process.env.TERM_PROGRAM_VERSION |}];
          [%raw {| process.env.TERM_PROGRAM = 'Hyper'|}];
          expect(isFancyTerminal()) |> toBe(3);
        });
        test("isFancyTerminal returns 0 if TERM is recognised terminal", () => {
          [%raw {| delete process.env.TERM_PROGRAM |}];
          [%raw {| process.env.TERM_PROGRAM = 'Apple_Terminal'|}];
          expect(isFancyTerminal()) |> toBe(2);
        });
        test("isFancyTerminal returns 2 if NO TERM_PROGRAM_VERSION", () => {
          [%raw {| delete process.env.TERM_PROGRAM |}];
          [%raw {| process.env.TERM_PROGRAM = 'true'|}];
          expect(isFancyTerminal()) |> toBe(0);
        });
        test("isFancyTerminal returns 0 if NO TERM_PROGRAM", () => {
          [%raw {| delete process.env.TERM_PROGRAM |}];
          [%raw {| process.env.TERM_PROGRAM = 'true'|}];
          expect(isFancyTerminal()) |> toBe(0);
        });
      }
    )
  );