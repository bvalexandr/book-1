#include <iostream>

using namespace std;

int main(void) {
    double a = 0.0;
    double b = 0.0;
    double res = 0.0;
    char op = 0;
    char exit_flag = 0;

    while (!exit_flag) {
        cout << "Введите операнды и оператор: ";
        cin >> a >> op >> b;
        switch (op) {
            case ('*'):
                res = a * b;
                break;
            case ('/'):
                res = a / b;
                break;
            case ('+'):
                res = a + b;
                break;
            case ('-'):
                res = a - b;
                break;
            default:
                cout << "Неизвестная операция";
                break;
        }
        cout << "Результат равен: " << res << '\n';
        cout << "Выполнить еще операцию (y/n)? ";
        cin >> exit_flag;
        exit_flag = exit_flag == 'y' ? 0 : 1;
    }

    return 0;
}