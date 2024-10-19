#include <iostream>

int main(void) {
    int a_up = 0;
    int a_down = 0;
    int b_up = 0;
    int b_down = 0;
    char ch = 0;
    std::cout << "Введите первую дробь: ";
    std::cin >> a_up >> ch >> a_down;
    std::cout << "Введите вторую дробь: ";
    std::cin >> b_up >> ch >> b_down;
    std::cout << "Сумма дробей равна: " << (a_up*b_down + a_down*b_up) << ch << a_down*b_down << std::endl;
    return 0;
}