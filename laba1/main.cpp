﻿#include "header.h"
#include "function.h"
#include "list.h"
int main()
{
	setlocale(LC_ALL, "Rus");
	List list;
	int decision = 0;
	string temp_place = " ";
	string temp_type = " ";
	int temp_number = 0;
	int temp_length = 0;
	Aeroflot temp;
	do
	{
		system("cls");
		cout
			<< "1 - Создать список и заполнить;" << endl
			<< "2 - Вывести список на экран;" << endl
			<< "3 - Добавить рейс;" << endl
			<< "4 - Отменить рейс;" << endl
			<< "5 - Поиск по месту назначения;" << endl
			<< "0 - Завершение работы." << endl << endl;
		cin >> decision;

		switch (decision)
		{
		case 1:
			try
			{
				system("cls");
				list.create(temp_length = set_length());
				for (int i = 0; i < temp_length; i++)
				{
					system("cls");
					cout << "Осталось - " << temp_length - i << endl;
					set_aero(temp_place, temp_type, temp_number);
					list.fill(temp_place, temp_type, temp_number, i);
				}
			}
			catch (const char *error)
			{
				system("cls");
				cout << error;
				Sleep(970);
			}
			break;
		case 2:
			system("cls");
			cout << "ID" << "\t\t\t" << "Пункт назначения" << "\t\t" << "Тип самолета" << "\t\t" << "Номер рейса" << endl;
			list.sorting();
			for (int i = 0; i < temp_length; i++)
			{
				list.show(i);
			}
			system("pause");
			break;
		case 3:
			flush_stdin();
			temp_length++;
			set_aero(temp_place, temp_type, temp_number);
			temp.set(temp_place, temp_type, temp_number);
			list.operator+=(temp);
			break;
		case 4:
			flush_stdin();
			temp_length--;
			list.operator-=(set_ID());
			break;
		case 5:
			flush_stdin();
			list.special_show(set_place());
			break;
		case 0:
			break;
		default:
			cout << "Неккоректное действие! Пожалуйста, повторите попытку!";
			Sleep(970);
			break;
		}
	} while (decision != 0);

	return 0;
}

