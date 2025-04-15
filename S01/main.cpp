#include <iostream>

using namespace std;

int main()
{
    int a;
    double b;
    float c;
    short d;
    setlocale(LC_ALL, "Russian");
    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    cout << "Введите значение c: ";
    cin >> c;
    cout << "Введите значение d: ";
    cin >> d;
    cout << "Значение суммы: " << a + b << endl;
    cout << "Значение разности: " << b - c << endl;
    cout << "Значение деления: " << a / c << endl;
    cout << "Значение умножения: " << a * d << endl;


    return 0;
}

