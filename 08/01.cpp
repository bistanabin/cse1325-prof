
// ========== person.h

#ifndef __PERSON_H
#define __PERSON_H

#include <ostream>

class Person {
  public:
    Person(std::string name);
    std::string to_string() const;
  protected:
    std::string _name;
};
#endif

// ========== person.cpp

#include <ostream>
#include "01_person.h"

Person::Person(std::string name) : _name{name} { }

std::string Person::to_string() const {return _name;}

#ifndef __STUDENT_H
#define __STUDENT_H

#include <ostream>
#include "01_person.h"

class Student : public Person {
  public:
    Student(std::string name, double gpa);
    std::string to_string() const;
  private:
    double _gpa;
};
#endif

#include <ostream>
#include "01_student.h"

Student::Student(std::string name, double gpa) : Person{name}, _gpa{gpa} { }

std::string Student::to_string() const {return _name + " (" + std::to_string(_gpa) + ")";}

// ========== main.cpp

#include <iostream>
#include "01_student.h"

int main() {
    Person p{"Professor Rice"};
    std::cout << p.to_string() << std::endl;
    Student s{"Encyclopedia Brown", 4.0};
    std::cout << s.to_string() << std::endl;
}
