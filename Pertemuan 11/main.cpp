#include <iostream>

using namespace std;

int main()
{
    cout << "Deret Fibonacci" << endl;

    int i = 1;
    int j = 1;

    cout << i << endl;

    for(int n = 0; n < 100; n++){
        n = j + i;
        cout << n << " " << endl;
        j = i;
        i = n;
    }
}
