#include "smart_array.h"

smart_array::smart_array(size_t size) : size_(size)
{
	arr_ = new int[size_] {};
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
	if (index < size_)
	{
		return arr_[index];
	}
	else
	{
		throw  std::runtime_error("Index of an element outside the array");
	}

	return arr_[0];
}

smart_array & smart_array::operator=(smart_array& v)
{
	delete[] arr_;
	index_add = 0;
	arr_ = nullptr;
	rsize_t size_ = v.get_size();

	if (size_ > 0)
	{
		arr_ = new int[size_]{};
		for (size_t i = 0; i < size_; i++)
		{
			arr_[i] = v[i];
			index_add = i;
		}
		index_add++;
	}

	return *this;
	
}

int smart_array::operator[](size_t index)
{
	return arr_[index];
}

size_t smart_array::get_size()
{
	return size_;
}

