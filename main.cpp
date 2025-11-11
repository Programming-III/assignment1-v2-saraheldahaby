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
class Student{

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
class Instructor{
private:
    string department;
    int experienceYears;


public:
    Instructor(string d,int exyears){
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
    students[]=s;

    }


    displayCourseInfo(){
    cout<<courseCode<<" "<<courseName<<" "<<
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
   
    
    return 0;
}
