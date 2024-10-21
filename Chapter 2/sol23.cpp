#include <iostream>

using namespace std;

int main(void) {
    int first_funt = 0;
    int first_shilling = 0;
    int first_pens = 0;
    int second_funt = 0;
    int second_shilling = 0;
    int second_pens = 0;
    int n = 0;
    char op = 0;
    char exit_flag = 0;
    char ch = 0;

    while (!exit_flag) {
        cout << "Выберите тип операции:\n";
        cout << "1. Сложение\n";
        cout << "2. Вычитание\n";
        cout << "3. Умножение на целое число\n";
        cin >> op;
        switch (op) {
            case ('1'):
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
                cout << "Сумма равна: J" << first_funt << '.' << first_shilling << '.' << first_pens << '\n';
                break;
            case ('2'):
                cout << "Введите первую сумму: J";
                cin >> first_funt >> ch >> first_shilling >> ch >> first_pens;
                cout << "Введите вторую сумму: J";
                cin >> second_funt >> ch >> second_shilling >> ch >> second_pens;
                if (first_pens - second_pens < 0) {
                    first_shilling--;
                    first_pens += 12;
                }
                if (first_shilling - second_shilling < 0) {
                    first_funt--;
                    first_shilling += 20;
                }
                first_shilling -= second_shilling;
                first_shilling %= 20;
                first_pens -= second_pens;
                first_pens %= 12;
                first_funt -= second_funt;
                cout << "Разница равна: J" << first_funt << '.' << first_shilling << '.' << first_pens << '\n';
                break;
            case ('3'):
                cout << "Введите сумму: J";
                cin >> first_funt >> ch >> first_shilling >> ch >> first_pens;
                cout << "Введите множитель: ";
                cin >> n;
                first_pens *= n;
                first_funt *= n;
                first_shilling *= n;

                first_shilling += first_pens / 12;
                first_pens %= 12;
                first_funt += first_shilling / 20;
                first_shilling %= 20;
                
                cout << "Сумма после умножения равна: J" << first_funt << '.' << first_shilling << '.' << first_pens << '\n';
                break;
            default:
                break;
        }
        
        cout << "Выполнить еще операцию (y/n)? ";
        cin >> exit_flag;
        exit_flag = exit_flag == 'y' ? 0 : 1;
    }
    
    return 0;
}