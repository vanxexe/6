#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");
    
    int n;
    std::cout << "Введіть число: ";
    std::cin >> n;
    if (n > 0) std::cout << "Додатнє";
    else if (n < 0) std::cout << "Від’ємне";
    else if (n == 0) std::cout << "Нуль";
    
    return 0;
}