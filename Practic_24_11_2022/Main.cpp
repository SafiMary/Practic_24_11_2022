#include <iostream>
#include "Struct.h"
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	int n = 3;
	book* mass = new book[n];
	string path = "file.txt";
	book a = { "dog","Tor","Artimov", 1980, 350, 35 };
	book b = { "frog","Tom", "Germanovich", 2000, 340, 34 };
	book c = { "like", "Red", "jonson", 2003, 200, 36 };
	mass[0] = a;
	mass[1] = b;
	mass[2] = c;
	show_book(a);
	cout << '\n';
	show_book(b);
	cout << '\n';
	show_book(c);
	cout << '\n';
	cout << "Имя автора книги: \n";
	cout << author_name(a);
	cout << '\n';
	cout << "Книга 1: \n";
	save_book(a,path);
	cout << "Книга 2: \n";
	save_book(b, path);
	cout << "Книга 3: \n";
	save_book(c, path);
	cout << '\n';
	add_book(mass, n);
	cout << '\n';
	save_book(mass[3], path);
	cout << "Книга 4: \n";
	show_book(mass[3]);
	cout << '\n';
	clear_arr(mass,n);

	



	return 0;
}
