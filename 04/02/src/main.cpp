#include <iostream>
#include "table.h"

int main()
{
    auto test = table<int>(2, 3);
    test[0][0] = 4;
    std::cout << test[0][0]; // выводит 4
}
