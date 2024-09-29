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

    @Override
    public int hashCode() {
        final int prime = 31;
        int result = 1;
        result = prime * result + ((model == null) ? 0 : model.hashCode());
        result = prime * result + ((color == null) ? 0 : color.hashCode());
        result = prime * result + Float.floatToIntBits(tip);
        result = prime * result + Float.floatToIntBits(fill);
        result = prime * result + (isCapped ? 1231 : 1237);
        return result;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        Pen other = (Pen) obj;
        if (model == null) {
            if (other.model != null)
                return false;
        } else if (!model.equals(other.model))
            return false;
        if (color == null) {
            if (other.color != null)
                return false;
        } else if (!color.equals(other.color))
            return false;
        if (Float.floatToIntBits(tip) != Float.floatToIntBits(other.tip))
            return false;
        if (Float.floatToIntBits(fill) != Float.floatToIntBits(other.fill))
            return false;
        if (isCapped != other.isCapped)
            return false;
        return true;
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
