#include <iostream>

using namespace std;

int main(void) {
    int seat_count = 0;
    int guest_count = 0;
    long long int res = 1;
    cout << "Введите количество гостей: ";
    cin >> guest_count;
    cout << "Введите количество стульев: ";
    cin >> seat_count;
    for (int i = 0; i < seat_count; i++) {
        res *= (guest_count - i);
    }
    cout << guest_count << " гостей могут разместиться на " << seat_count << " стульях " << res
         << " способами\n";
    return 0;
}