#include "Student.hpp"
Student::Student(){}
Student::Student(std::string username,std::string password,int id, std::string fname , std::string lname , std::string email , std::string gender ,int age) :Person(id  ,fname,lname ,email , gender ,age)
{
    this->username = username;
    this->password = password;
}
std::string Student::getUsername()
{
    return this->username;

}
std::string Student ::getPassword()
{
    return this->password;
}
