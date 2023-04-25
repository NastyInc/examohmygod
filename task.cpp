#include "task.h"
#include <iostream>

Task::Task(std::string name, int priority, std::string description, time_t date)
{
	this->_name = name;
	this->_priority = priority;
	this->_description = description;
	this->_date = date;
}

void Task::Print()
{
	std::cout << "Название: " << this->_name << std::endl;
}

Task Task::CreateTask()
{

	std::string name;
	std::cout << "Введите имя задачи: ";
	std::cin >> name;

	int priority;
	std::cout << "Введите приоритет задачи: ";
	std::cin >> priority;

	std::string description;
	std::cout << "Введите описание задачи: ";
	std::cin >> description;

	int date[3] = {};

	std::cout << "Введите день окончания задачи: ";
	std::cin >> date[0];

	std::cout << "Введите месяц окончания задачи: ";
	std::cin >> date[1];

	std::cout << "Введите год окончания задачи: ";
	std::cin >> date[2];

	// TO_DO: Поправить
	time_t currentTime = time(NULL);

	Task task(name, priority, description, currentTime);

	return task;
}