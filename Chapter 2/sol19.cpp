#include <iostream>

using namespace std;

int main(void) {
    double first = 0.0;
    int years = 0;
    double percent = 0.0;
    cout << "Введите начальный вклад: ";
    cin >> first;
    cout << "Введите число лет: ";
    cin >> years;
    cout << "Введите процентную ставку: ";
    cin >> percent;
    percent /= 100;
    for (int i = 0; i < years; i++) {
        first += first * percent;
    }
    cout << "Через " << years << " лет вы получите " << first << " долларов" << '\n';
    return 0;
}