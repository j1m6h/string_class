#include "string.h"

int main()
{
    string test("Hello World");
    string test0 = "Hellow World test0";
    string test1 = test + test0;

    std::cout << test << std::endl;
    std::cout << test0 << std::endl;
    std::cout << test1 << std::endl;

    /* we will get H */
    std::cout << test[0] << std::endl;

    return 0;
}