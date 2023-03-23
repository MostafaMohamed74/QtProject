#include "teacher.h"
Teacher::Teacher()
{

}
Teacher::Teacher(std::string username , std::string password ,int id, std::string fname , std::string lname , std::string email , std::string gender ,int age) :Person(id ,fname,lname,email,gender,age)
{
    this->username = username;
    this->password = password;
}
std::string Teacher::getUsername()
{
    return this->username;

}
std::string Teacher ::getPassword()
{
    return this->password;
}
void Teacher::setAcademicBackground(std::string a)
{
    this->academicBackground =a;


}
void Teacher::setAddress(std:: string a)
{
    this->address = a;

}
