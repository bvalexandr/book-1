#include <iostream>

int main(void) {
    const int a = 10;
    int b = a + 10;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << --b << std::endl;
    return 0;
}