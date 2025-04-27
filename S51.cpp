#include <iostream>
#include <cstring>
using namespace std;

void reverse(char *str) 
{
    int n = strlen(str);
    char str1[n];
    
    int i = n - 1;
    int j = 0;
    
    while (i >= 0)
    {
        str1[j] = str[i];
        i = i - 1;
        cout << str1[j];
        j = j + 1;
    }
}

int main()
{
    char str[50];
    cin >> str;
    
    reverse(str);
    
    return 0;
}
