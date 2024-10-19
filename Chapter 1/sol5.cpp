#include <ctype.h>

#include <iostream>

int main(void) {
    char ch = 0;
    std::cin >> ch;
    std::cout << islower(ch) << std::endl;
    return 0;
}