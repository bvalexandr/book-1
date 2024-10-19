#include <iostream>

int main(void) {
    const double ONE_SQUARE_FOOT = 7.481;
    double gallons = 0;
    std::cout << "Введите объем в галлонах: ";
    std::cin >> gallons;
    std::cout << "Эквивалентный объем в кубических футах равен: " << gallons * ONE_SQUARE_FOOT << std::endl;
    return 0;
}