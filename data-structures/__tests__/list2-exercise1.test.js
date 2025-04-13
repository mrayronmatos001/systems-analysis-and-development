import PilhaComDuasFilas from "../src/list2-exercise1";

describe("implementing 1 stack using 2 queue", () => {
    let stack;

    beforeEach(() => {
        stack = new PilhaComDuasFilas(5);
    });

    test("The push operation makes the last element become the top of the stack", () => {
        stack.push(1);
        stack.push(2);
        expect(stack.peek()).toBe(2);
    });

    test("The pop operation removes the top element from the stack.", () => {
        stack.push(1);
        stack.push(2);
        stack.pop();
        expect(stack.peek()).toBe(1);
    });

    test("isEmpty returns true for a new stack", () => {
        expect(stack.isEmpty()).toBe(true);
    });
    
    test("isEmpty returns false after pushing an element", () => {
        stack.push(10);
        expect(stack.isEmpty()).toBe(false);
    });
    
    test("isFull returns false when stack is not full", () => {
        stack.push(1);
        stack.push(2);
        expect(stack.isFull()).toBe(false);
    });
    
    test("isFull returns true when stack is full", () => {
        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);
        stack.push(5);
        expect(stack.isFull()).toBe(true);
    });
    
    test("length returns the correct number of elements", () => {
        expect(stack.length()).toBe(0);
        stack.push(1);
        stack.push(2);
        expect(stack.length()).toBe(2);
        stack.pop();
        expect(stack.length()).toBe(1);
    });
    
    test("pop on empty stack throws error", () => {
        expect(() => stack.pop()).toThrow("Stack underflow");
    });
    
    test("peek on empty stack throws error", () => {
        expect(() => stack.peek()).toThrow("Stack is empty");
    });
    
    test("push on full stack throws error", () => {
        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);
        stack.push(5);
        expect(() => stack.push(6)).toThrow("Stack overflow");
    });
});