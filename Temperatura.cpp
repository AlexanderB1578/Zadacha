#include <iostream>

int main()
{   
    setlocale(LC_ALL, "rus");

    int c;
    int f;
    
    std::cout << "Введите значение температуры" << std::endl;
    std::cin >> c;

    f = c * (9/5) + 32;

    std::cout << f;
}