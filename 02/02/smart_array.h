#pragma once

#include <iostream>

class smart_array
{
public:
	smart_array(size_t size);
	~smart_array();

	void add_element(int val);
	int get_element(size_t index);
	size_t get_size();

	smart_array & operator=(smart_array& v); //перегрузка
	int operator[](size_t index);

	size_t get_index_add();


private:
	int* arr_;
	size_t index_add{};
	size_t size_{};
};

