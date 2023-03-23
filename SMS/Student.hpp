#ifndef STUDENT_HPP
#define STUDENT_HPP
#include"person.h"
class Student : public Person
{
private:
  std::string username;
  std::string password;

public:
  Student();
  Student(std::string username ,std::string password ,int id, std::string fname , std::string lname , std::string email , std::string gender ,int age);
  std::string getUsername();
  std::string getPassword();
};

#endif // STUDENT_HPP
