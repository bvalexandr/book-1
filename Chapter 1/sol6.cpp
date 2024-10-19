#include <iostream>
#include <iomanip>

int main(void) {
    const double funt = 1.487;
    const double frank = 0.172;
    const double mark = 0.584;
    const double yen = 0.00955;
    double usd = 0;
    std::cout << "Введите сумму в долларах: ";
    std::cin >> usd;
    std::cout << std::endl;
    std::cout << "Валюта" << std::setw(24) << "Сумма" << std::endl;
    std::cout << "Фунт стергинтов" << std::setw(12) << usd / funt << std::endl;
    std::cout << "Франк" << std::setw(22) << usd / frank << std::endl;
    std::cout << "Немецкая марка" << std::setw(13) << usd / mark << std::endl;
    std::cout << "Японская йена" << std::setw(14) << usd / yen << std::endl;
    return 0;
}