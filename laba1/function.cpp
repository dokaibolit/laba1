#include "function.h"
void flush_stdin()
{
	cin.clear();
	while (cin.get() != '\n');
}
void set_aero(string &place, string &type, int &number)
{
	cout << "¬ведите пункт назначени€: ";
	getline(cin, place);
	cout << "¬ведите тип самолета: ";
	cin >> type;
	flush_stdin();
	cout << "¬ведите номер рейса: ";
	cin >> number;
	flush_stdin();
}
int set_length()
{
	int length;
	cout << "¬ведите размер списка: ";
	cin >> length;
	flush_stdin();
	return length;
}
int set_ID()
{
	int ID;
	cout << "¬ведите ID рейса: ";
	cin >> ID;
	return ID;
}
string set_place()
{
	string place;
	cout << "¬ведите пункт назначени€: ";
	cin >> place;
	return place;
}
