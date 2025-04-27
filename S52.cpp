#include <iostream>
using namespace std;

void print(int a)
{
    cout << a << endl;
}
void print(double a)
{
    cout << a << endl;
}
void print(char *a)
{
    cout << a << endl;
}
void print(int a1, int a2)
{
    cout << a1 << " и " << a2 << endl;
}

int main()
{
    setlocale(0, "RUSSIAN");
    print(9), print(1.2), print("Код"), print(12,33);
    return 0;
}
