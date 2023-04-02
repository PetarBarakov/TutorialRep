#include <iostream>
#include <cstring>

int main()
{   
    std::string name;
    int num;
    
    std::cout << "What is your name: ";
    std::cin >> name;
    std::cout << "Hello " << name << std::endl;

    std::cout << "Give me a number: ";
    std::cin >> num;
    std::cout << "Here is the number doubled: " << num * 2 << std::endl;
}