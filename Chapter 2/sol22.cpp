#include <iostream>

using namespace std;

int main(void) {
    double first = 0.0;
    double first_copy = 0.0;
    double after = 0;
    double percent = 0.0;
    int years = 0;
    cout << "Введите начальный вклад: ";
    cin >> first;
    first_copy = first;
    cout << "Введите целевую сумму вклада: ";
    cin >> after;
    cout << "Введите процентную ставку: ";
    cin >> percent;
    percent /= 100;
    first_copy += first_copy * percent;
    while (first_copy <= after) {
        years++;
        first_copy += first_copy * percent;
    }
    cout << "Для достижения целевой суммы " << after << " при начальном вкладе " << first
         << " и процентной ставке " << percent * 100 << " потребуется " << years
         << " лет. При этом вы получите " << first_copy << " долларов\n";
    return 0;
}