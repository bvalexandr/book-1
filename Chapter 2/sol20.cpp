#include <iostream>

using namespace std;

int main(void) {
    int first_funt = 0;
    int first_shilling = 0;
    int first_pens = 0;
    int second_funt = 0;
    int second_shilling = 0;
    int second_pens = 0;
    char ch = 0;
    do {
        cout << "Введите первую сумму: J";
        cin >> first_funt >> ch >> first_shilling >> ch >> first_pens;
        cout << "Введите вторую сумму: J";
        cin >> second_funt >> ch >> second_shilling >> ch >> second_pens;
        if (first_pens + second_pens > 11) {
            first_shilling++;
        }
        if (first_shilling + second_shilling > 19) {
            first_funt++;
        }
        first_shilling += second_shilling;
        first_shilling %= 20;
        first_pens += second_pens;
        first_pens %= 12;
        first_funt += second_funt;
        cout << "Всего: J" << first_funt << '.' << first_shilling << '.' << first_pens << '\n';
        cout << "Продолжить (y/n)? ";
        cin >> ch;
        ch = ch == 'y' ? 1 : 0;
    } while (ch);
    return 0;
}