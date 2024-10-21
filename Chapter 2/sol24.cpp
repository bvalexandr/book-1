#include <iostream>

using namespace std;

int main(void) {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    char op = 0;
    char fill = 0;
    char exit_flag = 0;
    do {
        cout << "Введите выражение: ";
        cin >> a >> fill >> b >> op >> c >> fill >> d;
        switch (op) {
            case ('+'):
                cout << "Сумма дробей равна: " << (a * d + b * c) << '/' << b * d << '\n';
                break;
            case ('-'):
                cout << "Разница дробей равна: " << (a * d - b * c) << '/' << b * d << '\n';
                break;
            case ('*'):
                cout << "Произведение дробей равно: " << a * c << '/' << b * d << '\n';
                break;
            case ('/'):
                cout << "Частное дробей равно: " << a * d << '/' << b * c << '\n';
                break;
            default:
                break;
        }
        cout << "Провести новое вычисление (y/n)? ";
        cin >> exit_flag;
        exit_flag = (exit_flag == 'y' ? 0 : 1);
    } while (!exit_flag);
    return 0;
}