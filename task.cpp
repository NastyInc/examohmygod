
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
	std::cout << "Íàçâàíèå: " << this->_name << std::endl;
}

Task Task::CreateTask()
{

	std::string name;
	std::cout << "Ââåäèòå èìÿ çàäà÷è: ";
	std::cin >> name;

	int priority;
	std::cout << "Ââåäèòå ïðèîðèòåò çàäà÷è: ";
	std::cin >> priority;

	std::string description;
	std::cout << "Ââåäèòå îïèñàíèå çàäà÷è: ";
	std::cin >> description;

	int date[3] = {};

	std::cout << "Ââåäèòå äåíü îêîí÷àíèÿ çàäà÷è: ";
	std::cin >> date[0];

	std::cout << "Ââåäèòå ìåñÿö îêîí÷àíèÿ çàäà÷è: ";
	std::cin >> date[1];

	std::cout << "Ââåäèòå ãîä îêîí÷àíèÿ çàäà÷è: ";
	std::cin >> date[2];

	// TO_DO: Ïîïðàâèòü
	time_t currentTime = time(NULL);

	Task task(name, priority, description, currentTime);

	return task;
