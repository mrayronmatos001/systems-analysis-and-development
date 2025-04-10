import removeDuplicates from "../src/list1-exercise7";
import Pilha from "../src/Pilha";

describe("removing Duplicates", () => {
    let stack;
    beforeEach(() => {
        stack = new Pilha(8);
      });

    test("entry: stack", () => {
        stack.push(3);
        stack.push(7);
        stack.push(3);
        stack.push(2);
        stack.push(7);
        stack.push(1);
        stack.push(4);
        stack.push(2);
        expect(removeDuplicates(stack)).toBe("37214");
    });
});