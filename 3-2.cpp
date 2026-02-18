#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");
    double a, b, c;
    std::cout << "Введіть три сторони трикутника: ";
    std::cin >> a >> b >> c;


    if ((a + b > c) && (a + c > b) && (b + c > a)) std::cout << "Трикутник існує" << std::endl;
    else std::cout << "Помилка";
 
    std::cout << "Тип: ";
    if (a == b && b == c && a == c) std::cout << "Рівносторонній";
    else if (a == b || b == c || a == c) std::cout << "Рівнобедрений";
    else std::cout << "Різносторонній";

    return 0;
}
