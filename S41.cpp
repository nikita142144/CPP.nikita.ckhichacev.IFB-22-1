#include <iostream>
#include <cmath>
using namespace std;

double squared_sum(double a, double b) {
    double sum = a + b;
    double c = pow(sum, 2);
    return c;
}

int main() {
    setlocale(0, "Russian");
    double a, b;
    
    cout << "Введите первое число: ";
    cin >> a;
    
    cout << "Введите второе число: ";
    cin >> b;
    
    cout << "Квадрат суммы чисел равен: " << squared_sum(a, b);
    
    return 0;
}
