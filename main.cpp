#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
class Person{

private:
    string name;
    int id;

public:
    Person(string s,int i){
        s=name;
        i=id;
    }

    display(){
        cout<<s<<" "<<i<<endl;
    }




Person::Person()
{

}

Person::~Person()
{

}
};

// ==================== Student Class Implementation ====================
class Student::Person(){

private:
int yearLevel;
string major;

public:
Student(int year,string m)::Person(){
    year=yearLevel;
    m=major;
}

display()::Person(){

    cout<<year<<" "<<m<<endl;
}

Student::Student()
{

}

Student::~Student()
{

}

};




// ==================== Instructor Class Implementation ====================
class Instructor::Person(){
private:
    string department;
    int experienceYears;


public:
    Instructor(string d,int exyears)::Person(){
        d=department;
        exyears=experienceYears;
    }

    display()::Person(){
    cout<<d<<" "<<exyears<<endl;
    }




Instructor::Instructor()
{

}

Instructor::~Instructor()
{

}
};


// ==================== Course Class Implementation ====================
class Course{
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;

public:
    Course(string code,string cName,int max,Student* s,int curStudents){
    code=courseCode;
    cName=courseName;
    max=maxStudents;
    s=students;
    curStudents=currentStudents;
    }

    addStudent(const Student& s){
        if(max<students.length())
    students[]=s;

    }



    displayCourseInfo(){
    cout<<courseCode<<endl;
    cout<<courseName<<endl;
    cout<<maxStudents<<endl;
    cout<<currentStudents<<endl;



    }



Course::Course()
{

}

Course::~Course()
{

}
};

// ==================== Main Function ====================
int main() {
   Student s1=new Student(2,computer science);
    Student s2=new Student(2,business);
     Instructor i1=new Instructor(computer science,5);
    Course c1=new Course(1600,accounting,100,50);
    s1.Course c1;
     s2.Course c1;
    
    
    
    
    return 0;
}
