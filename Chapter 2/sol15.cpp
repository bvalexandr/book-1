#include <stdio.h>

#include <iostream>

int main(void) {
    long int res = 0;
    char key = 0;
    std::cout << "Введите число: ";
    while ((key = getchar()) != '\n') {
        res = res * 10 + (key - '0');
    }
    std::cout << "Введено число: " << res << '\n';
    return 0;
}