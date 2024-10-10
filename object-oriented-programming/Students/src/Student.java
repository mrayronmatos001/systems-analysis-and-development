

public class Student {
    private String name;
    private int enrollment;
    private Float grade1;
    private Float grade2;
    private Float grade3;
    private Float average;
    private String situation;

    public String getName() {
        return name;
    }

    public int getEnrollment() {
        return enrollment;
    }

    public Float getGrade1() {
        return grade1;
    }

    public Float getGrade2() {
        return grade2;
    }

    public Float getGrade3() {
        return grade3;
    }

    public Float getAverage() {
        return average;
    }

    public String getSituation() {
        return situation;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setEnrollment(int enrollment) {
        this.enrollment = enrollment;
    }

    public void setGrade1(Float grade1) {
        this.grade1 = grade1;
    }

    public void setGrade2(Float grade2) {
        this.grade2 = grade2;
    }

    public void setGrade3(Float grade3) {
        this.grade3 = grade3;
    }

    public void setAverage(Float average) {
        this.average = average;
    }

    public void setSituation(String situation) {
        this.situation = situation;
    }

    public void setGrades(Float g1, Float g2, Float g3) {
        this.grade1 = g1;
        this.grade2 = g2;
        this.grade3 = g3;
    }

    public void calculatingAverage() {
        this.average = (this.grade1 + this.grade2 + this.grade3) / 3;
    }

    public void informingSituation() {
        this.calculatingAverage();

        if (average >= 0.0 && average < 3.0)
            this.situation = "Reprovado(a)";
        else if (average >= 3.0 && average < 7.0)
            this.situation = "Em recuperação...";
        else if (average > 7.0)
            this.situation = "Aprovado(a)";
    }

    public boolean CheckMyEnrollment(int enrollment) {
        if (this.enrollment == enrollment) {
            return true;
        } else
            return false;
    }

    public void setSomeGrade(int gradeCod, Float value) {
        switch (gradeCod) {
            case 1:
                this.grade1 = value;
                break;
            case 2:
                this.grade2 = value;
                break;
            case 3:
                this.grade3 = value;
                break;
        }
    }

    @Override
    public String toString() {
        return "Aluno [nome=" + name + ", matricula=" + enrollment + ", nota1=" + grade1 + ", nota2=" + grade2 + ", nota3="
                + grade3 + ", media=" + average + ", situacao=" + situation + "]";
    }
}