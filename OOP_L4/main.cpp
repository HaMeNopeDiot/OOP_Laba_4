#include <iostream>
#include <Windows.h>
#include"Date.h"
#include"Triad.h"

void menu();

int main()
{
    SetConsoleOutputCP(1251);
    Date A;
    std::cout << "Введите дату:";
    std::cin >> A;
    std::cout << "Вы ввели:" << A <<'\n';
    int choise=0;
    do
    {
        std::cout << A;
        menu();
        std::cin >> choise;
        switch (choise)
        {
        case 1:
        {
            A.increaseDay();
            A.normalize();
        }break;
        case 2:
        {
            A.increaseMonth();
            A.normalize();
        }break;
        case 3:
        {
            A.increaseYear();
            A.normalize();
        }break;
        case 4:
        {
            A.increaseAll();
            A.normalize();
        }break;
        case 5:
        {
            std::cout << "Введите число:";
            int i;
            std::cin >> i;
            A.addCurDays(i);
            A.normalize();
        }break;
        case 6:
        {
            std::cout << "Введите число:";
            int i;
            std::cin >> i;
            A.addCurMonth(i);
            A.normalize();
        }break;
        case 7:
        {
            std::cout << "Введите число:";
            int i;
            std::cin >> i;
            A.addCurYear(i);
            A.normalize();
        }break;
        case 8:
        {
            std::cout << "Хорошего дня!"<<'\n';
        }break;
        default:
        {
            std::cout << "Некорректный ввод!"<<'\n';
        }break;
        }

    } while (choise != 8);
    

    return 0;
}


void menu()
{
    std::cout << "Меню:" << '\n';
    std::cout << "1. Следующий день" << '\n';
    std::cout << "2. Следующий месяц" << '\n';
    std::cout << "3. Следующий год" << '\n';
    std::cout << "4. Прибавить 1 ко всему" << '\n';
    std::cout << "5. Прибавить дней" << '\n';
    std::cout << "6.Прибавить месяцев" << '\n';
    std::cout << "7.Прибавить лет" << '\n';
    std::cout << "8.Выход" << '\n';
}

//14 62стр Лаптев 4 лаба

//77 67стр Лаптев 5 лаба