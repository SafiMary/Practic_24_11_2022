#pragma once

//прототипы функций

#include <iostream>
#include <fstream>

struct author {
	std::string name;
	std::string surname;
};

struct book {
	std::string title;
	author surname_name;
	int year{};
	int num_pages{};
	int price{};
};
void show_book(book& P);
std::string author_name(book& P);
void save_book(book& P, std::string& path);
void add_book(book*& arr, int length);
void clear_arr(book* arr, int length);