#ifndef COURSE_H
#define COURSE_H
#include <teacher.h>
#include <Student.hpp>
#include <vector>
#include <String>

class Course
{
private:
    std::string courseName;
    Teacher taughtBy;
    std::vector<Student> registredStudents;


public:
    Course();
    Course(std::string c);

};

#endif // COURSE_H
