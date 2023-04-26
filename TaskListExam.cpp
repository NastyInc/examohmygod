#include <iostream>
#include "task.h"

void Menu()
{
    int userChoice;
    int firstCaseChoice;

    std::cout << "Выберите нужный Вам функционал:" << std::endl;
    std::cout << "1. Добавление дел" << std::endl;
    std::cout << "2. Удаление дел" << std::endl;
    std::cout << "3. Редактирование дел" << std::endl;
    std::cout << "4. Поиск дел" << std::endl;
    std::cout << "5. Отображение списка дел" << std::endl;
    std::cout << "0. Exit" << std::endl;

    std::cin >> userChoice;
    switch (userChoice)
    {

    case 1:
        Task::CreateTask();
        std::cout << "Хотите записать еще или вернуться в меню?" << std::endl;
        std::cout << "1 - да, 2 - выход в меню" << std::endl;
        std::cin >> firstCaseChoice;
        while (firstCaseChoice == 1)
        {
            Task::CreateTask();
            std::cout << "Хотите записать еще или вернуться в меню?" << std::endl;
            std::cout << "1 - да, 2 - выход в меню" << std::endl;
            std::cin >> firstCaseChoice;
        }
        break;

    case 2:

        break;

    case 3:
        break;

    case 4:
        break;

    case 5:
        break;

    case 0:
        std::cout << "До новых встреч!";
        break;
    }; Menu();
}

int main()
{
    setlocale(0, "ru");

    time_t t = time(NULL);
    
    //Task abrakadabra = Task("Спать", 1, "Очень важно", t);
//getline - ввод!!!!
   
    
    //int userChoice;

    std::cout << "Добрый день, перед Вами приложение <<Список дел>>!" << std::endl;
    std::cout << "Начнем использование"<< std::endl;
    

    
   
    //std::cin >> userChoice;

    Menu();
    
}

