#include "smart_array.h"

smart_array::smart_array(size_t size): size_(size)
{
	arr_ = new int[size_];
}

smart_array::~smart_array()
{
	delete[] arr_;
}


void smart_array::add_element(int val)
{
	if (index_add < size_)
	{
		arr_[index_add] = val;
		index_add++;
	}
	else
	{
		throw  std::runtime_error("out of the array");
	}
	
}

int smart_array::get_element(size_t index)
{
	if (index_add < size_)
	{
		return arr_[index];
	}
	else
	{
		throw  std::runtime_error("out of the array");
	}

	return arr_[0];
}
