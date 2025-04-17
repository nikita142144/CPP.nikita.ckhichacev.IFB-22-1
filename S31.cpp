#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    setlocale(0, "Russian");

    string numbers[10] = { "Ноль", "Один", "Два", "Три", "Четыре", 
                          "Пять", "Шесть", "Семь", "Восемь", "Девять" };

    int a;
    cout << "Введите число: ";
    cin >> a;

    for (int i = 0; i < 10; i++) {
        if (a == i) {
            cout << numbers[i] << endl;
        }
    }

    return 0;
}
