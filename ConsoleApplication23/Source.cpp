#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>

using namespace std;

int q;

void main()

{
	setlocale(LC_ALL, "Russian");
start:
	int nz;

	do
	{
		cout << "������� ����� �������: ";
		cin >> nz;
		switch (nz)
		{

		}


		cout << "������ ���������� 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			goto start;
			break;
		default:
		{
			cout << "������" << endl;
		}
		}
	} while (nz > 0);


}

