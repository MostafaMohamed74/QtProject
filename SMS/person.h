#ifndef PERSON_H
#define PERSON_H
#include<String>

class Person
{
private:
int id;
int age;
std::string firstName;
std::string lastName;
std::string email;
std::string gender;




public:
    Person();
    Person(int id, std::string fname , std::string lname , std::string email , std::string gender ,int age);
    std::string getFirstName();
    std::string getLastName();
    std::string getEmail();
    std::string getGender();
    int getId();
    int getAge();
};

#endif // PERSON_H
