#include <iostream>

using namespace std;

int main()
{
    int sum; int i;
    while ( i<=1000){
        if (i%7==0){
            sum = sum+i;
        }
       i=i+4;
    };
    cout << sum << endl;
     sum=0;
     i = 1;
     while ( i<=1000){
        if (i%7==0){
            sum = sum+i;
        }
       i=i+4;
    };
    cout << sum << endl;
    return 0;
}
