#pragma once
#include <ctime>
#include <string>

class Task
{
private:
	/// <summary>
	/// �������� ������
	/// </summary>
	std::string _name;

	/// <summary>
	/// ��������� ������
	/// </summary>
	int _priority;

	/// <summary>
	/// �������� ������
	/// </summary>
	std::string _description;

	/// <summary>
	/// ���� � ����� ������
	/// </summary>
	time_t _date;

public:
	/// <summary>
	/// ����������� � �����������
	/// </summary>
	/// <param name="name">�������� ������</param>
	/// <param name="priority">��������� ������</param>
	/// <param name="description">�������� ������</param>
	/// <param name="date">���� � ����� ������</param>
	Task(std::string name, int priority, std::string description, time_t date);

	void Print();

	static Task CreateTask();
};