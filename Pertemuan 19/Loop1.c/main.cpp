#include <iostream>

using namespace std;

int main()
{
    /*1. Buatlah Program untuk mencetak angka integer dari 100 hingga 1 dan sebaliknya menggunakan satu
    loop for multi expression di dalamnya, nama file : loop1.c*/
    int i,j;
    for( i= 100, j = 1; i > 0; i--, j++){
        cout << "i=" << i << " dan j=" << j << endl;
    }
    return 0;
}
