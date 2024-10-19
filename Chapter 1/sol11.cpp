#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
    int width = 22;
    cout << setiosflags(ios::left);
    cout << setw(width + 7) << "Фамилия";
    cout << setw(width + 3) << "Имя";
    cout << setw(width + 5) << "Адрес";
    cout << setw(width + 5) << "Город" << endl;
    cout << setw(width * 4) << setfill('-') << "" << setfill(' ') << endl;
    cout << setw(width + 6) << "Петров";
    cout << setw(width + 7) << "Василий";
    cout << setw(width + 8) << "Кленовая, 16";
    cout << setw(width + 14) << "Санкт-Петербург" << endl;
    cout << setw(width + 6) << "Иванов";
    cout << setw(width + 6) << "Сергей";
    cout << setw(width + 8) << "Осиновая, 3";
    cout << setw(width + 7) << "Находка" << endl;
    cout << setw(width + 7) << "Сидоров";
    cout << setw(width + 4) << "Иван";
    cout << setw(width + 9) << "Березовая, 21";
    cout << setw(width + 11) << "Калининград" << endl;
    return 0;
}