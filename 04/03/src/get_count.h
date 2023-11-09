#pragma once

#include <vector>

template <class T>
class get_count
{
public:
    get_count(std::vector<T> &val) : val_(val){};
    int operator()()
    {
        T res = 0;
        if (!val_.empty())
        {
            for (const T &item : val_)
            {
                if (item % 3 == 0)
                {
                    res++;
                }
            }
        }

        return res;
    }

protected:
    std::vector<T> val_;
};