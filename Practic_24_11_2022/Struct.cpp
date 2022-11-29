#include "Struct.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
//������� 

void show_book(book & P) {
	std::cout << "�������� �����: " << P.title << '\n';
	std::cout << "������� � ��� ������: " << P.surname_name.surname << " " << P.surname_name.name << '\n';
	std::cout << "��� �������: " << P.year << '\n';
	std::cout << "���-�� �������: " << P.num_pages << '\n';
	std::cout << "���� �� ���������: " << P.price << '\n';

}
std::string author_name(book& P) {
	return P.surname_name.name;
	std::cout << '\n';
}

void save_book(book& P, std::string& path) {
	std::ofstream out;
	out.open(path, std::ios::app);
	if (out.is_open()) {
		std::cout << "���� ������ ��� ������.\n";
		std::cout << "���������� � ����� ��������\n";
		out << P.title << '\n';
		out << P.surname_name.surname + " " <<
		P.surname_name.name << '\n';
		out << P.year << '\n';
		out << P.num_pages << '\n';
		out << P.price << '\n';
		out.close();
	}
	else
		std::cout << "������ �������� �����.\n";

	out.close();
}


void add_book(book*& arr, int length) {
	std::cout << "�������� �����: \n";
	book* tmp = new book[length + 1
	]{};
	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];
	delete[] arr;

	arr = tmp;
	std::cout << "������� �������� �����: " << '\n';
	std::cin >> arr[length].title;
	std::cout << "������� ������� ������: " << '\n';
	std::cin >> arr[length].surname_name.surname;
	std::cout << "������� ��� ������: " << '\n';
	std::cin >> arr[length].surname_name.name;
	std::cout << "������� ��� �������: " << '\n';
	std::cin >> arr[length].year;
	std::cout << "������� ���-�� �������: " << '\n';
	std::cin >> arr[length].num_pages;
	std::cout << "������� ���� �� ���������: " << '\n';
	std::cin >> arr[length].price;

}
void clear_arr(book* arr, int length){
delete[]arr;
}