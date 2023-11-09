#include <iostream>
#include <vector>

template <typename T>
T squaring(T val)
{
    return (val * val);
}

template <typename T>
std::vector<T> squaring(std::vector<T> &val)
{
    std::vector<T> res;
    if (!val.empty())
    {
        for (size_t i = 0; i < val.size(); i++)
        {
            res.push_back(val[i] * val[i]);
        }
    }
    return res;
}

template <typename T>
void print(T val)
{
    std::cout << val << std::endl;
}

template <typename T>
void print(std::vector<T> &val)
{
    if (!val.empty())
    {
        for (size_t i = 0; i < val.size(); i++)
        {
            std::cout << ((i > 0) ? ", " : "") << val[i];
        }
    }
    std::cout << std::endl;
}

int main()
{
    int in = 4;
    std::cout << "[IN]: ";
    print(in);
    std::cout << "[OUT]: ";
    print(squaring(in));

    std::vector<int> vIn{-1, 4, 8};
    // squaring(vIn);
    std::cout << "[IN]: ";
    print(vIn);

    std::vector<int> out = squaring(vIn);
    std::cout << "[OUT]: ";
    print(out);
}
