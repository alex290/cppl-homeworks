#pragma once

#include <vector>

template <class T>
class get_sum
{
public:
    get_sum(std::vector<T> &val) : val_(val){};
    int operator()()
    {
        T res = 0;
        if (!val_.empty())
        {
            for (const T &item : val_)
            {
                if (item % 3 == 0)
                {
                    res = res + item;
                }
            }
        }

        return res;
    }

protected:
    std::vector<T> val_;

};