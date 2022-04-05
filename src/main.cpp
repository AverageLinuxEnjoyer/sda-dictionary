#include <iostream>
#include "../include/dictionary.hpp"

int main()
{
    Dictionary<int, Student> d;

    Student s1{"Mihai"};
    d.put(4, s1);
    
    Student y = d.search(4);
    Student x = d.search(2);

    std::cout << x.getNume() << std::endl;
    std::cout << y.getNume() << std::endl;

    std::cout << (y == Student()) << std::endl;
    std::cout << (x == Student()) << std::endl;


    return 0;
}