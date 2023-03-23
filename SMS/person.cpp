#include "person.h"

Person::Person()
{



}
Person::Person(int id, std::string fname , std::string lname , std::string email , std::string gender ,int age)
{
    this->id = id;
    this->firstName = fname;
    this->lastName = lname;
    this->email = email;
    this->gender = gender;
    this->age = age;
}
int Person::getId()
{
    return this->id;
}
std::string Person::getFirstName()
{
    return this->firstName;
}
std::string Person::getLastName()
{
    return this->lastName;
}
std::string Person::getEmail()
{
    return this->email;
}
int Person::getAge(){

    return this->age;
}

