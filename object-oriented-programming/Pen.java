public class Pen {

    private String model;
    private String color;
    private float tip;
    private float fill;
    private boolean isCapped;

    public Pen(String model, String color, float tip, float fill, boolean isCapped) {
        this.model = model;
        this.color = color;
        this.tip = tip;
        this.fill = fill;
        this.isCapped = isCapped;
    }

    public String getModel() {
        return model;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public float getTip() {
        return tip;
    }

    public void setTip(float tip) {
        this.tip = tip;
    }

    public float getFill() {
        return fill;
    }

    public void setFill(float fill) {
        this.fill = fill;
    }

    public boolean getCapped() {
        return isCapped;
    }

    public void setCapped(boolean isCapped) {
        this.isCapped = isCapped;
    }

    public void showStatus() {
        System.out.println("model: " + model);
        System.out.println("color: " + color);
        System.out.println("tip: " + tip);
        System.out.println("fill: " + fill);
        System.out.println("Capped: " + isCapped);
    }

    public void writting() {
        System.out.println("Hi, I'm writting...");
    }

    public void capping() {
        isCapped = true;
    }

    public void uncapping() {
        isCapped = false;
    }

    public static void main(String[] args) {
        Pen pen1 = new Pen("bic", "blue", 0.7f, 0.5f, true);
        pen1.capping();
        pen1.writting();
        pen1.showStatus();
        pen1.uncapping();
        pen1.writting();
    }
}
