#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
    int num = 0;
    int rows = 20;
    int cols = 10;
    cout << "Введите целое число: ";
    cin >> num;
    for (int row = 1; row < rows + 1; row++) {
        for (int col = 1; col < cols + 1; col++) {
            cout << setw(8) << num * row * col << ' ';
        }
        cout << '\n';
    }
    return 0;
}