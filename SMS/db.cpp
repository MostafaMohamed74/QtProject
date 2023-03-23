#include "db.h"

DB::DB()
{

}
void DB::addStudent(Student *s)
{
    this->students.push_back(s);
}

void DB::addTeacher(Teacher *t)
{
    this->teachers.push_back(t);
}

void DB::addCourse(Course * c)
{
    this->courses.push_back(c);

}
