#include "function.h"
void flush_stdin()
{
	cin.clear();
	while (cin.get() != '\n');
}
void set_aero(string &place, string &type, int &number)
{
	cout << "Введите пункт назначения: ";
	getline(cin, place);
	cout << "Введите тип самолета: ";
	cin >> type;
	flush_stdin();
	cout << "Введите номер рейса: ";
	cin >> number;
	flush_stdin();
}
int set_length()
{
	int length;
	cout << "Введите размер списка: ";
	cin >> length;
	flush_stdin();
	return length;
}
int set_ID()
{
	int ID;
	cout << "Введите ID рейса: ";
	cin >> ID;
	return ID;
}
string set_place()
{
	string place;
	cout << "Введите пункт назначения: ";
	cin >> place;
	return place;
}
