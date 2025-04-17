#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"Russian");
    int a;
    int b;
    cout << "Введите число " << endl;
    cin >> a;
     cout << "Введите число " << endl;
    cin >> b;
    cout << "Деление нацело " << a << " / " << b << " = " << a/b <<endl;
    cout << "Остаток от деления " << a << " % " << b << " = " << a%b <<endl;
    return 0;
}
