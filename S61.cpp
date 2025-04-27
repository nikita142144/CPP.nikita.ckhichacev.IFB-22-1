#include <iostream>
using namespace std;

class Bucket
{
public:
    double volume;//объем ведра
    double used;//кол-во жидкости в ведре
    Bucket (int a, int b) {volume = a, used = b;}

    void flush()//опустошение
    {
        used = 0;
    }

    float fill(float c)//наполнение
    {

        float rest = c - (volume - used);//остаток
        used = used + c;//добавление всей жидкости

        if (used >= volume) {//если переполнено или равно полному объему,записываем в used полный объем
            used = volume;
        }
        if (rest <= 0)//если остаток отрицательный или равен 0,значит все поместилось
        {
            rest = 0;
        }
        return rest;

    }
private:
};

int main()
{
     Bucket test_01(12, 3);
     cout << "1) " << test_01.volume << ", " << test_01.used << "\n";
     int rest = test_01.fill(14);
     cout << "2) " << test_01.used << ", " << rest << "\n";
     test_01.flush();
     rest = test_01.fill(8);
     cout << "3) " << test_01.used << ", " << rest << "\n";
     return 0;
}
