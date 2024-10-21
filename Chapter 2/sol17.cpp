#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
    int rows = 20;
    int col = 1;
    char fill_ch = 'X';
    for (int row = 0; row < rows; row++) {
        cout << setw(rows - col) << "";
        cout << setfill(fill_ch);
        cout << setw(1 + row * 2) << "";
        cout << setfill(' ');
        cout << setw(rows - col) << "";
        cout << '\n';
        col++;
    }
    return 0;
}