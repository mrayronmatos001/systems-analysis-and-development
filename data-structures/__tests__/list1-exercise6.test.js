import infixToRPN from "../src/list1-exercise6";

describe("turning algebric notaions in reverse polish notation", () => {
    test("(a+(b*c)", () => {
        expect(infixToRPN("(a+(b*c))")).toBe("abc*+");
    });
    test("((a+b)*(z+x))", () => {
        expect(infixToRPN("((a+b)*(z+x))")).toBe("ab+zx+*");
    });
    test("((a+t)*((b+(a+c))^(c+d)))", () => {
        expect(infixToRPN("((a+t)*((b+(a+c))^(c+d)))")).toBe("at+bac++cd+^*");
    });
    test("a+b*c-d", () => {
        expect(infixToRPN("a+b*c-d")).toBe("abc*+d-");
    });
    test("(a+b)+c/d", () => {
        expect(infixToRPN("(a+b)+c/d ")).toBe("ab+cd/+");
    });
    test("a*b-(c-d)+e ", () => {
        expect(infixToRPN("a*b-(c-d)+e")).toBe("ab*cd--e+");
    });
})