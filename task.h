#pragma once
#include <ctime>
#include <string>

class Task
{
private:
	/// <summary>
	/// Название задачи
	/// </summary>
	std::string _name;

	/// <summary>
	/// Приоритет задачи
	/// </summary>
	int _priority;

	/// <summary>
	/// Описание задачи
	/// </summary>
	std::string _description;

	/// <summary>
	/// Дата и время задачи
	/// </summary>
	time_t _date;

public:
	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="name">Название задачи</param>
	/// <param name="priority">Приоритет задачи</param>
	/// <param name="description">Описание задачи</param>
	/// <param name="date">Дата и время задачи</param>
	Task(std::string name, int priority, std::string description, time_t date);

	void Print();

	static Task CreateTask();
};