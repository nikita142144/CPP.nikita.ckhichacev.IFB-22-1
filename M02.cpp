#include <iostream>
#include <cmath>
using namespace std;

float ploshad(float A, int N)
{
    float S;
    const double PI = 3.141592653589793;

    if (N == 3)
    {
        S = sqrt(3) / 4 * A * A;
    }
    else
    {
        S = (A * A * N) / (4 * tan(PI / N));
    }

    return S;
}

int main()
{
    setlocale(0, "RUSSIAN");

    float A;
    int N;

    cout << "Введите длину стороны: ";
    cin >> A;

    while (A < 0)
    {
        cout << "Введите длину стороны: ";
        cin >> A;
    }

    cout << endl
         << "Введите число сторон (минимум 3): ";
    cin >> N;

    while (N < 3)
    {
        cout << endl
             << "Введите число сторон: ";
        cin >> N;
    }

    float result = ploshad(A, N);

    cout << "Площадь многоугольника равна: " << result << endl;

    return 0;
}
