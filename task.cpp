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
	std::cout << "��������: " << this->_name << std::endl;
}

Task Task::CreateTask()
{

	std::string name;
	std::cout << "������� ��� ������: ";
	std::cin >> name;

	int priority;
	std::cout << "������� ��������� ������: ";
	std::cin >> priority;

	std::string description;
	std::cout << "������� �������� ������: ";
	std::cin >> description;

	int date[3] = {};

	std::cout << "������� ���� ��������� ������: ";
	std::cin >> date[0];

	std::cout << "������� ����� ��������� ������: ";
	std::cin >> date[1];

	std::cout << "������� ��� ��������� ������: ";
	std::cin >> date[2];

	// TO_DO: ���������
	time_t currentTime = time(NULL);

	Task task(name, priority, description, currentTime);

	return task;
}