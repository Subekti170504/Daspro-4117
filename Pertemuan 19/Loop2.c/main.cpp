#include <iostream>

using namespace std;

int main()
{
    /*2. Buatlah Program untuk mencetak angka integer dari 100 hingga 1, tetapi
    yang genap saja dengan menggunakan statement continue, nama file : loop2.c*/
    for(int i = 2; i <= 100; i++){
        if(i % 2 == 1){
            continue;
        }
        cout << "Nilai genap adalah " << i << endl;
    }
    return 0;
}
