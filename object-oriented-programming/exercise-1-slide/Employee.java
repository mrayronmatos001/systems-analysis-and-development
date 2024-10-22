import java.util.List;
import java.util.ArrayList;

public class Employee {
    private String name;
    private float salary;
    private List<Allocation> allocationsList;
    private List<Telephone> telephonesList;

    public Employee(String name, float salary, List<Allocation> allocationsList, List<Telephone> telephonesList) {
        this.name = name;
        this.salary = salary;
        this.allocationsList = new ArrayList<>(allocationsList);
        this.telephonesList = new ArrayList<>(telephonesList);
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public float getSalary() {
        return salary;
    }

    public void setSalary(float salary) {
        this.salary = salary;
    }

    public List<Allocation> getAllocationsList() {
        return allocationsList;
    }

    public void setAllocationsList(List<Allocation> allocationsList) {
        this.allocationsList = allocationsList;
    }

    public List<Telephone> getTelephonesList() {
        return telephonesList;
    }

    public void setTelephonesList(List<Telephone> telephonesList) {
        this.telephonesList = telephonesList;
    }

    @Override
    public String toString() {
        return "Employee [name:" + name + ", salary:" + salary + ", allocationsList:" + allocationsList
                + ", telephonesList:" + telephonesList + "]";
    }
}
