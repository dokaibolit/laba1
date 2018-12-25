#include "aeroflot.h"
Aeroflot::Aeroflot()
{
	place = " ";
	type = " ";
	number = 0;
}
void Aeroflot::set(string place, string type, int number)
{
	this->place = place;
	this->type = type;
	this->number = number;
}
void Aeroflot::get(int ID)
{
	cout << ID + 1 << "\t\t\t" << place << "\t\t\t\t" << type << "\t\t\t" << number << endl;
}
int Aeroflot::get_number()
{
	return number;
}
string Aeroflot::get_place()
{
	return place;
}
