import infixToRPN from "../src/list1-exercise6";

describe("turning algebric notaions in reverse polish notation", () => {
    test("(a+(b*c)", () => {
        expect(infixToRPN("(a+(b*c))")).toBe("abc*+");
    })
})