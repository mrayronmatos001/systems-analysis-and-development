import decimalToBinary from "../src/list1-exercise4";

test("Transforma um número decimal em binário", () => {
    expect(decimalToBinary(25)).toBe("11001");
});