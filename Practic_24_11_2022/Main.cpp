#include <iostream>
#include "Struct.h"
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <cstdlib>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	int n = 3;
	book* mass = new book[n];
	string path = "file.txt";
	book a = { "dog","Tor", "Artimov", 1980, 350, 35 };
	book b = { "frog","Tom", "Germanovich", 2000, 340, 34 };
	book c = { "like", "Red", "jonson", 2003, 200, 36 };
	mass[0] = a;
	mass[1] = b;
	mass[2] = c;
	/*show_book(a);
	cout << '\n';
	show_book(b);
	cout << '\n';
	show_book(c);
	cout << '\n';
	cout << "��� ������ �����: \n";
	cout << author_name(a);
	cout << '\n';
	cout << "����� 1: \n";
	save_book(a,path);
	cout << '\n';
	cout << "����� 2: \n";
	cout << '\n';
	save_book(b, path);
	cout << '\n';
	cout << "����� 3: \n";
	save_book(c, path);
	cout << '\n';
	add_book(mass, n);
	cout << '\n';
	save_book(mass[3], path);
	cout << "����� 4: \n";
	show_book(mass[3]);
	cout << '\n';
	clear_arr(mass,n);*/
	int e;
	do{
	cout << "������� ����, � ���� ���� ����������� ������� ��������� �������: \n";
	cout << "1. �������� ���� ������� �����.\n";
	cout << "2. ��������� ���������� � ����� ������� �����.\n";
	cout << "3. �������� ���������� � ����� ������� �����.\n";
	cout << "4. �������� ���������� � ����� ������� �����.\n";
	cout << "5. ���������� ������.\n";
	cout << "������� ����� �������!\n";
	cin >> e;
	switch (e) {
	case 1: add_book(mass, n); break;
	case 2:	save_book(mass[3], path); break;
	case 3:	show_book(mass[3]); break;
	case 4:	clear_arr(mass, n); break;
	case 5: exit(0);
	default:cout << "������ �����!!\n"; break;
	}
		
	} while (e != 5);



	return 0;
}
