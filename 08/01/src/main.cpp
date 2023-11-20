#include <iostream>
#include <vector>
#include <memory>

template <typename T>
T &move_vectors(T &&val_one)
{
    T &new_ptr = val_one;
    // T old_ptr;
    // val_one = nullptr;
    return new_ptr;
};

template <typename T>
void print(const std::vector<T> &val)
{
    if (!val.empty())
    {
        for (size_t i = 0; i < val.size(); i++)
        {
            std::cout << ((i > 0) ? " " : "") << val[i];
        }
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<std::string> one = {"test_string1", "test_string2"};
    std::vector<std::string> two;
    two = move_vectors(one);

    print(two);

    return 0;
}
