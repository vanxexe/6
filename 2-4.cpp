#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");
    
    int n;
    std::cout << "Введіть число: ";
    std::cin >> n;

    bool s = (n % 5 == 0) && (n % 11 == 0);

    if (s) std::cout << "Число " << n << " ділиться на 5 і на 11 одночасно.";
    else std::cout << "Умова не виконується.";

    return 0;
}