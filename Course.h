#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;

//#write your code here

class Course
{
    public:
        Course();
        virtual ~Course();
        Course(string code,string cName,int max,Student* s,int curStudents);
         addStudent(const Student& s);
         displayCourseInfo();

    protected:

    private:
};

#endif // COURSE_H















#endif
