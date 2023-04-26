
#pragma once
#include <ctime>
#include <string>

class Task
{
private:
	/// <summary>
	/// Íàçâàíèå çàäà÷è
	/// </summary>
	std::string _name;

	/// <summary>
	/// Ïðèîðèòåò çàäà÷è
	/// </summary>
	int _priority;

	/// <summary>
	/// Îïèñàíèå çàäà÷è
	/// </summary>
	std::string _description;

	/// <summary>
	/// Äàòà è âðåìÿ çàäà÷è
	/// </summary>
	time_t _date;

public:
	/// <summary>
	/// Êîíñòðóêòîð ñ ïàðàìåòðàìè
	/// </summary>
	/// <param name="name">Íàçâàíèå çàäà÷è</param>
	/// <param name="priority">Ïðèîðèòåò çàäà÷è</param>
	/// <param name="description">Îïèñàíèå çàäà÷è</param>
	/// <param name="date">Äàòà è âðåìÿ çàäà÷è</param>
	Task(std::string name, int priority, std::string description, time_t date);

	void Print();

	static Task CreateTask();
