#include <iostream>
#include <cmath>
using namespace std;

float get_angle(float a, float b, float c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        setlocale(0, "Russian");
        cout << "Ошибка, стороны должны быть положительными" << endl;
        return -1;
    }

    float cosA = (b * b + c * c - a * a) / (2 * b * c);
    float angle = acos(cosA) * 180 / M_PI;

    return angle;
}

int main()
{
    setlocale(0, "Russian");
    float a, b, c;

    cout << "Введите длины сторон:" << endl;
    cin >> a >> b >> c;

    double angle = get_angle(a, b, c);
    if (angle != -1)
    {
        cout << "Угол напротив первой стороны равен: " << angle << " градусов" << endl;
    }

    return 0;
}
