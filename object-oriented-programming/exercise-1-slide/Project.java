import java.util.List;
import java.util.ArrayList;

public class Project {
    private String name;
    private float value;
    private List<Allocation> allocationsList;

    public Project(String name, float value, List<Allocation> allocationsList) {
        this.name = name;
        this.value = value;
        this.allocationsList = new ArrayList<>(allocationsList);
    }

    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public float getValue() {
        return value;
    }
    public void setValue(float value) {
        this.value = value;
    }
    public List<Allocation> getAllocationsList() {
        return allocationsList;
    }
    public void setAllocationsList(List<Allocation> allocationsList) {
        this.allocationsList = new ArrayList<>(allocationsList);
    }

    @Override
    public String toString() {
        return "Project [name:" + name + ", value:" + value + ", allocationsList:" + allocationsList + "]";
    }
}