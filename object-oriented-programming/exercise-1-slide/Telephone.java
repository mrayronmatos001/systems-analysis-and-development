public class Telephone {
    private String ddd;
    private String number;
    private Employee employee;

    public Telephone(String ddd, String number, Employee employee) {
        this.ddd = ddd;
        this.number = number;
        this.employee = employee;
    }

    public String getDdd() {
        return ddd;
    }

    public void setDdd(String ddd) {
        this.ddd = ddd;
    }

    public String getNumber() {
        return number;
    }

    public void setNumber(String number) {
        this.number = number;
    }

    public Employee getEmployee() {
        return employee;
    }

    public void setEmployee(Employee employee) {
        this.employee = employee;
    }

    @Override
    public String toString() {
        return "Telephone [ddd:" + ddd + ", number:" + number + ", employee:" + employee + "]";
    }
}
