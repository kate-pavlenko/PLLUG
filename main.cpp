#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int a{0};
    std::cin >> a;
    std::cout << std::endl;
    std::cout << "number + number = " << a + a << std::endl;
}
