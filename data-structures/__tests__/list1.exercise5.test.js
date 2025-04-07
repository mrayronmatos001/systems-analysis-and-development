import isWellFormatted from "../src/list1-exercise5";

describe("Well-formed parentheses and brackets", () => {
    test("no sequencial parentheses and brackets", () => {
        expect(isWellFormatted("[ ( ) [ ( ) ] ] ( )")).toBe(true);
    });

    test("bad-formed sequence", () => {
        expect(isWellFormatted("( ( ) ]")).toBe(false);
    });
});