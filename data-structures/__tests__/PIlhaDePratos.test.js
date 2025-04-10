import PilhaDePratos from "../src/PilhaDePratos";

describe("creating PilhaDePratos", () => {
    let stackOfPlates;

    beforeEach(() => {
        stackOfPlates = new PilhaDePratos(3);
    });

    test("creates a new internal stack when capacity is exceeded", () => {
        stackOfPlates.push(3);
        stackOfPlates.push(10);
        stackOfPlates.push(15);
        stackOfPlates.push(20);
        expect(stackOfPlates.stacks.length).toBe(2);
    });

    test("remove the last internal stack when it's empty", () => {
        stackOfPlates.push(3);
        stackOfPlates.push(10);
        stackOfPlates.push(15);
        stackOfPlates.push(20);
        stackOfPlates.pop();
        stackOfPlates.pop();
        expect(stackOfPlates.stacks.length).toBe(1);
    });
})