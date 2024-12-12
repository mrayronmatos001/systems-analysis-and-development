package exercise4;

public abstract class C1 {
    protected String name;

    public C1(String name) {
        this.name = name;
    }

    public abstract void displayMessage();  

    public void showName() {
        System.out.println("Name: " + name);
    }
}
