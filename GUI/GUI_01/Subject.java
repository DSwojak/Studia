public class Subject {

    private String name;
    private Person teacher;
    private Student[] students;
    private int index;

    public Subject(String name){
        this.name = name;
        students = new Student[3];
        index = 0;
    }

    public void setTeacher(Person teacher){
        this.teacher = teacher;
    }

    public void addStudent(Student student) throws TooManyStudentsException{
        if (index >= students.length)
            throw new TooManyStudentsException();

        students[index++] = student;
    }

    @Override
    public String toString(){
        String res = name + ", teacher: " + teacher.getName() + ", students: ";

        for (int i = 0; i < index; i++)
            res += students[i].getName() + " ";

        return res;
    }

}
