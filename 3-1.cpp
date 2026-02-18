#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");
    
    int n;
    std::cout << "Введіть бал: ";
    std::cin >> n;

    if (n < 0 || n > 100) std::cout << "Некоректний бал";
    else if (n >= 90) std::cout << "A";
    else if (n >= 82) std::cout << "B";
    else if (n >= 75) std::cout << "C";
    else if (n >= 64) std::cout << "D";
    else if (n < 64) std::cout << "F";

    return 0;
}