#include "authenticator.h"
#include "adminwindow.h"
#include "studentwindow.h"
#include"teacherwindow.h"
#include "ivalidpasswordwindow.h"
Authenticator::Authenticator()
{


}
Authenticator::Authenticator(std::string username , std::string password)
{
    this->username = username;
    this->password = password;
}

WindowSelector* Authenticator::checkValidty(Person** p)
{
    //read from database and compare
    DB d;
    //check if admin
    if (username == "admin" && password == "admin")
    {
        return new AdminWindow();
    }
    else
    {
        //the below code can be enapsualted in a function as there is repetetion
        //search in students
        for (Student* s : d.students)
        {
            if (s->getUsername() == username)
            {
                if (s->getPassword() == password)
                {
                    *p =s;
                    return new StudentWindow();
                }
                else
                {
                    //show invalid password messagebox (return new object which shows messagebox

                }
            }
        }

        //seacrh if teacher
        for (Teacher * t : d.teachers)
        {
            if (t->getUsername() == username)
            {
                if (t->getPassword() == password)
                {
                    return new TeacherWindow();
                }
                else
                {
                    //show invalid password messagebox (return new object which shows messagebox
                }

            }

        }
        //if neither admin nor teacher nor student show username doesnot exist so here return messagebox with this text
    }

return new InvalidPasswordWindow() ;
   }
void Authenticator::setUsername(std::string name)
{
    this->username = name;

}
void Authenticator::setPassword(std::string pass)
{
    this->password = pass;

}

