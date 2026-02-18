#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");

    int a, b;
    std::cout << "Введіть два числа: ";
    std::cin >> a >> b;
    std::cout << "Більше число: ";
    if (a > b) std::cout << a;
    else if (b > a) std::cout << b;

    return 0;
}