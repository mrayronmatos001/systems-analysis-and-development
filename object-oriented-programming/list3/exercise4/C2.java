package exercise4;

public class C2 extends C1 {
    protected int age;

    public C2(String name, int age) {
        super(name);
        this.age = age;
    }

    @Override
    public void displayMessage() {
        System.out.println("C2 Class's Message: Hi there, " + name + "!");
    }

    public int calcBornBirth(int currentYear) {
        return currentYear - age;
    }

    //sobrecarga de método
    public int calcBornBirth() {
        return 2024 - age;
    }
}
