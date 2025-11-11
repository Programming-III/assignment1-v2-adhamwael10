include <iostream>
using namespace std;
class Person{
   private:
    String name;
    int id;
public:
   Person(String name,int id){
    this->name=name;
    this->id=id;
   }
   display(){
    cout << "Person name is " << name endl; 
    cout << "Person id is " << id ;
   }
   }
   class Student : public Person{
    private:
    int yearLevel;
    String major;
  public:
  Student(int yearLevel,String major){
    this->yearLevel=yearLevel;
    this->major=major;
  }
  display(){
    cout << "Student year level is " << yearLevel endl;
    cout << "Student major is " << major;

  }
}
  class Instructor : public Person{
    private:
    String department;
    int experienceYears;
    public:
    Instructor(String department,int experienceYears){
        this->department=department;
        this->experienceYears=experienceYears;
    }
    display(){
        cout << "Instructor department is " << department endl;
        cout << "Instructor experience years is " << experienceYears;

    }

  }
  class course{
    private:
    String courseCode;
    String courseName;
    int maxStudents;
    Students* students;
    int currentStudents;
    public:
     course(String courseCode, String courseName,inr maxStudents, Students* students, int currentStudents ){
        this->courseCode=courseCode;
        this->courseName=courseName;
        this->maxStudents=maxStudents;
        this->students=students;
        this->currentStudents=currentStudents;
     }
     addStudents(const Student& s){
 students = s;

     }
     displayCourseInfo(){
        cout << "course code: " << courseCode;
        cout << "course name : " << courseName;
        cout << "currents students " << currentStudents;
        s.display();
     }
  }
   
