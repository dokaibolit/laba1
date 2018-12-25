#pragma once
#include "aeroflot.h"
class List
{
private:
	class Node
	{
	public:
		Aeroflot data;
		Node *ptrNext;

		Node(Aeroflot data = Aeroflot(), Node *ptrNext = nullptr);
	};
	int length;
	Node *head;
	Node *tail;
public:
	List();
	~List();
	void create(int length); // создание списка размером length
	void push(); // "проталкивание" элемента в список
	void check_tail(int ID);
	void fill(string place, string type, int number, int ID); // заполнение списка
	void show(int ID);
	void sorting();
	void swap(Aeroflot & object_1, Aeroflot & object_2);
	void operator+=(Aeroflot &object);
	void operator-=(int ID);
	void delete_1(int ID, Node *temp, Node *temp_prev, Node *temp_next);
	void delete_2(int ID, Node *temp);
	void delete_3(int ID, Node *temp, Node *temp_prev, Node *tail);
	void special_show(string curr_place);
};

