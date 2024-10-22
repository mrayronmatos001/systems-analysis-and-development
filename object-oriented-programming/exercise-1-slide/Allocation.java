public class Allocation {
    private int hours;
    private Project project;
    private Employee employee;

    public Allocation(int hours, Project project, Employee employee) {
        this.hours = hours;
        this.project = project;
        this.employee = employee;
    }

    public int getHours() {
        return hours;
    }

    public void setHours(int hours) {
        this.hours = hours;
    }

    public Project getProject() {
        return project;
    }

    public void setProject(Project project) {
        this.project = project;
    }

    public Employee getEmployee() {
        return employee;
    }

    public void setEmployee(Employee employee) {
        this.employee = employee;
    }

    @Override
    public String toString() {
        return "Allocation [hours:" + hours + ", project:" + project + ", employee:" + employee + "]";
    }
}
