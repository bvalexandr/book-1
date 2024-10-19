#include <iostream>

using namespace std;

int main(void) {
    double funt = 0;
    cout << "Введите число десятичных фунтов: ";
    cin >> funt;
    int old_funt = static_cast<int>(funt);
    double decfrac = funt - old_funt;
    double shilling = decfrac * 20;
    decfrac = shilling - static_cast<int>(shilling);
    double pens = decfrac * 12;
    cout << "Эквивалентная сумма в старой форме записи: J" << old_funt << '.' << static_cast<int>(shilling) << '.' << static_cast<int>(pens) << endl;
    return 0;
}