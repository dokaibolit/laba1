#include "function.h"
void flush_stdin()
{
	cin.clear();
	while (cin.get() != '\n');
}
void set_aero(string &place, string &type, int &number)
{
	cout << "������� ����� ����������: ";
	getline(cin, place);
	cout << "������� ��� ��������: ";
	cin >> type;
	flush_stdin();
	cout << "������� ����� �����: ";
	cin >> number;
	flush_stdin();
}
int set_length()
{
	int length;
	cout << "������� ������ ������: ";
	cin >> length;
	flush_stdin();
	return length;
}
int set_ID()
{
	int ID;
	cout << "������� ID �����: ";
	cin >> ID;
	return ID;
}
string set_place()
{
	string place;
	cout << "������� ����� ����������: ";
	cin >> place;
	return place;
}
