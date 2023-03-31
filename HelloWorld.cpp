#include <iostream>
#include <cstring>

int main()
{   
    std::cout << "What is your name: ";

    std::string name;

    std::cin >> name;

    std::cout << "Hello " << name << std::endl;
}