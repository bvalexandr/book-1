#include <iostream>

int main(void) {
    int funt = 0;
    int shiling = 0;
    int pens = 0;
    std::cout << "Введите количество фунтов: ";
    std::cin >> funt;
    std::cout << "Введите количество шиллингов: ";
    std::cin >> shiling;
    std::cout << "Введите количество пенсов: ";
    std::cin >> pens;
    std::cout << "Десятичных фунтов: " << 'J' << ((funt*20 + shiling)*12 + pens) / 240.0 << std::endl;
    return 0;
}