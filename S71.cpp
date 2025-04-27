#include <iostream>
using namespace std;

class CreditCard
{

public:
    int Number;// Номер карты
    float Balance;// Текущий баланс
    CreditCard (int a, float b) {Number = a, Balance = b;}



    void Put(float c)
    {
        Balance = Balance + c;// Увеличивает баланс на указанную сумму

    }

    void Take(float d)
    {
        Balance = Balance - d;// Уменьшает баланс на указанную сумму

    }
private:


};


int main()
{
    CreditCard firstCC(1234, 50);// Создаём карту с номером 1234 и начальным балансом 50
    firstCC.Put(1000);//  Пополняем баланс на 1000
    cout << firstCC.Balance << endl;
    firstCC.Take(500);//  Снимаем 500
    cout << firstCC.Balance << endl;

    return 0;
}
