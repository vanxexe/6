#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");

    std::string password;
    std::cout << "Введіть пароль: ";
    std::cin >> password;
    if (password == "1234") std::cout << "Доступ дозволено";
    else std::cout << "Помилка";
    
    return 0;
}