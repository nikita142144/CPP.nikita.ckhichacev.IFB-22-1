#include <iostream>

using namespace std;

int main()
{
    int a;
    double b;
    float c;
    short d;
    setlocale(LC_ALL, "Russian");
    cout << "������� �������� a: ";
    cin >> a;
    cout << "������� �������� b: ";
    cin >> b;
    cout << "������� �������� c: ";
    cin >> c;
    cout << "������� �������� d: ";
    cin >> d;
    cout << "�������� �����: " << a + b << endl;
    cout << "�������� ��������: " << b - c << endl;
    cout << "�������� �������: " << a / c << endl;
    cout << "�������� ���������: " << a * d << endl;


    return 0;
}

