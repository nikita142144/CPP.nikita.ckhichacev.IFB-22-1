#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a;
    int b;
    setlocale(0, "Russian");

    cout << "Введите значение а:" << endl;
    cin >> a;

    cout << "Введите значение b:" << endl;
    cin >> b;

    ofstream fout;
    fout.open("output.txt");

    for (int i = a; i <= b; i += 1) {
        fout << i * 3 << endl;
    }

    fout.close();

    return 0;
}
