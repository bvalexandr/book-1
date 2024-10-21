#include <iostream>

using namespace std;

int main(void) {
    char key = 0;
    double temp = 0;
    cout << "1. Перевод из градусов Цельсия в градусы по Фаренгейту\n";
    cout << "2. Перевод из градусов по Фаренгейта в градусы Цельсия\n";
    cin >> key;
    switch (key) {
        case ('1'):
            cout << "Введите температуру в градусах Цельсия: ";
            cin >> temp;
            cout << "Температура по Фаренгейту: " << temp * 9 / 5 + 32 << '\n';
            break;
        case ('2'):
            cout << "Введите температуру в градусах Фаренгейта: ";
            cin >> temp;
            cout << "Температура по Цельсию: " << (temp - 32) * 5 / 9 << '\n';
            break;
        default:
            break;
    }

    return 0;
}