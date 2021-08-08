#include "string.h"

int main()
{
    string my_string("Hello");
    string my_string1("World");

    std::cout << my_string << std::endl;
    std::cout << my_string[3] << std::endl;
    std::cout << my_string[4] << std::endl;
    std::cout << my_string + my_string1 + my_string1 << std::endl;

    return 0;
}