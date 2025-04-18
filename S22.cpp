#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream in;
    in.open("output.txt");

    int a;

    for (int n = 1; in >> a; n+=1) {
        cout << n << ". " << a << endl;
    }

    return 0;
}
