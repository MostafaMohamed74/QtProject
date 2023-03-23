#ifndef TEACHER_H
#define TEACHER_H
#include"person.h"
#include <String>

class Teacher : Person
{
private:
    std::string username;
    std::string password;
    std::string academicBackground;
    std::string address;


public:
    Teacher();
    Teacher(std::string username , std::string password ,int id, std::string fname , std::string lname , std::string email , std::string gender ,int age);
    void setAcademicBackground(std::string a);
    void setAddress(std::string a);
    std::string getUsername();
    std::string getPassword();

};

#endif // TEACHER_H
