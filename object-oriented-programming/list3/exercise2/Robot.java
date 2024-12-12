package exercise2;

public class Robot {
    private int line, column, step;

    public Robot(int line, int column, int step) {
        this.line = line;
        this.column = column;
        this.step = step;
    }

    public Robot(int step) {
        this.line = 0;
        this.column = 0;
        step = 1;
    }

    public Robot() {
        line = 0;
        column = 0;
        step = 1;
    }

    public int getLine() {
        return line;
    }

    public void setLine(int line) {
        this.line = line;
    }

    public int getColumn() {
        return column;
    }

    public void setColumn(int column) {
        this.column = column;
    }

    public int getStep() {
        return step;
    }

    public void setStep(int step) {
        this.step = step;
    }

    @Override
    public String toString() {
        return "Robot [line=" + line + ", column=" + column + ", step=" + step + "]";
    }

    public void currentPosition() {
        System.out.println("Posição atual do robô: x:" + line + " y:" + column);
    }

    public void moveFoward(String[][] grid) {
        if(column < grid[0].length-step) {
            column += step;
        } else {
            column -= 1;
        }
    }

    public void moveBackward() {
        if(column >= 0+step) {
            column -= step;
        } else {
            column += 1;
        }
    }

    public void moveRight(String[][] grid) {
        if(line < grid.length-step) {
            line += step;
        } else {
            line -= 1;
        }
    }

    public void moveLeft() {
        if(line >= 0+step) {
            line -= step;
        } else {
            line += 1;
        }
    }
}
