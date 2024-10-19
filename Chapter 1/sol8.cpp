#include <iostream>
#include <iomanip>

int main(void) {
    std::cout << "Город" << std::setfill('.') << std::setw(24) << "Данные" << std::endl;
    return 0;
}