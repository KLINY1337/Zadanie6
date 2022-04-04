#include <iostream>
#include <string>
#include "functions.h"
#include "random"
using namespace std;

int main() {
	srand(time(0));
	setlocale(LC_ALL, "");

	cout << "������������ ������ �6 ����-13-21 ���������� �.�. ������� 23" << endl << endl;
	cout << "�������� ����� �������:\n1) ����������� ����������� �������, ������� ��������� �������������� ���������� ��� ������� �������������\n2) ������������ ����� ������ �� �������� ����� ���������, ������ � ���� �������� � �������� ������� \n0) ��������� ���������\n";

	int choice1;

	do {
		cin >> choice1;

		if (choice1 != 1 && choice1 != 2 &&  choice1 != 0) cout << "������� �������� ��������, ���������� �����.\n";
	} while (choice1 != 1 && choice1 != 2  && choice1 != 0);

	system("cls");

	switch (choice1) {

	case 1: {
		cout << "������� ������, ������� ����� ����������������:\n";

		string s;
		cin.ignore(32767, '\n');
		getline(cin, s);
		
		if (is_identifier(s, 0)) cout << "������ �������� ���������������\n\n";
		else cout << "������ �� �������� ���������������\n\n";
		break; }

	case 2: {
		list l, m;
		cout << "������� ����� ������������� ������:\n";
		
		int list_len;
		cin >> list_len;

		l.generate(list_len);

		cout << "��������������� ������: ";
		l.print();
		cout << "\n";

		reverse2(l, list_len, m);

		cout << "���������� ����������� ������: ";
		m.print();
		cout << "\n";

		break; }

	case 0:
		return 0;
	}
	main();
}