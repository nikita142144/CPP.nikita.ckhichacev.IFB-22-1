#include <iostream>

using namespace std;

double squared_sum(double a, double b) {
    double c;
    c = (a + b) * (a + b);
    return c;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Квадрат суммы чисел равен: " << squared_sum(a, b);
    return 0;
}
