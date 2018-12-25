#pragma once
#include "header.h"
class Aeroflot
{
private:
	string place; // место назначения
	string type; // тип самолета
	int number; // номер рейса
public:
	Aeroflot();
	void set(string place, string type, int number);
	void get(int ID);
	int get_number();
	string get_place();
};

