#include <iostream>

using namespace std;

int main(void) {
    int n = 0;
    do {
        cout << "Введите число, факториал которого нужно вычислить ";
        cout << "или 0 для выхода: ";
        cin >> n;
        long long res = 1;
        for (int i = 1; i < n + 1; i++) {
            res *= i;
        }
        if (n) {
            cout << "Факториал числа " << n << " равен " << res << '\n';
        }
    } while (n);
    return 0;
}