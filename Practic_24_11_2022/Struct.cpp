#include "Struct.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
//функции 

void show_book(book & P) {
	std::cout << "Название книги: " << P.title << '\n';
	std::cout << "Фамилия и Имя автора: " << P.surname_name.surname << " " << P.surname_name.name << '\n';
	std::cout << "Год издания: " << P.year << '\n';
	std::cout << "Кол-во страниц: " << P.num_pages << '\n';
	std::cout << "Цена за экземпляр: " << P.price << '\n';

}
std::string author_name(book& P) {
	return P.surname_name.name;
	std::cout << '\n';
}

void save_book(book& P, std::string& path) {
	std::ofstream out;
	out.open(path, std::ios::app);
	if (out.is_open()) {
		std::cout << "Файл открыт для записи.\n";
		std::cout << "Информация о книге записана\n";
		out << P.title << '\n';
		out << P.surname_name.surname + " " <<
		P.surname_name.name << '\n';
		out << P.year << '\n';
		out << P.num_pages << '\n';
		out << P.price << '\n';
		out.close();
	}
	else
		std::cout << "Ошибка открытия файла.\n";

	out.close();
}


void add_book(book*& arr, int length) {
	std::cout << "Добавьте книгу: \n";
	book* tmp = new book[length + 1
	]{};
	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];
	delete[] arr;

	arr = tmp;
	std::cout << "Введите название книги: " << '\n';
	std::cin >> arr[length].title;
	std::cout << "Введите фамилию автора: " << '\n';
	std::cin >> arr[length].surname_name.surname;
	std::cout << "Введите имя автора: " << '\n';
	std::cin >> arr[length].surname_name.name;
	std::cout << "Введите год издания: " << '\n';
	std::cin >> arr[length].year;
	std::cout << "Введите кол-во страниц: " << '\n';
	std::cin >> arr[length].num_pages;
	std::cout << "Введите цену за экземпляр: " << '\n';
	std::cin >> arr[length].price;

}
void clear_arr(book* arr, int length){
delete[]arr;
}