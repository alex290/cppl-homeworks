#pragma once

#include <iostream>

class smart_array
{
public:
	smart_array(size_t size);
	~smart_array();

	void add_element(int val);
	int get_element(size_t index);

private:
	int* arr_;
	size_t size_;
	size_t index_add{};
};

