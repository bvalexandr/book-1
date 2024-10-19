#include <iostream>

int main(void) {
    double celsius_temp = 0.0;
    std::cout << "Введите температуру в градусах Цельсия: ";
    std::cin >> celsius_temp;
    std::cout << "Температура в градусах Фаренгейта: " << celsius_temp * 9 / 5 + 32 << std::endl;
    return 0;
}