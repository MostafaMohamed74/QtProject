#ifndef DB_H
#define DB_H
#include <QtSql>
#include<QSqlDatabase>
#include <vector>
#include "Student.hpp"
#include "teacher.h"
#include "course.h"

class DB
{


public:
    DB();
    void init();
    std::vector<Student *> students;
    std::vector<Teacher *> teachers;
    std::vector<Course *> courses;
    void addStudent(Student * s);
    void addTeacher(Teacher * s);
    void addCourse (Course * c);

};

#endif // DB_H
