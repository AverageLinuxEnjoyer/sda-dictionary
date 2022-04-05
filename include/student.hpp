#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student {
public:
    Student() : nume("") {};
    Student(const std::string nume) : nume(nume) { }

    bool operator==(const Student& other) const {
        return nume == other.nume;
    }

    std::string getNume() { return nume; }
private:
    std::string nume;
};

#endif // STUDENT_HPP
