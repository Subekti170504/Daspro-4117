#include <iostream>

using namespace std;

int main()
{
    /*4. Buatlah Program untuk mencetak rata-rata angka integer dari 1 hingga 20
    menggunakan loop for, nama file : loop4.c*/
    int sum, rata;
    sum = 0;

    for(int i = 1; i <= 20; i++){
        sum = sum + i;
        rata = sum % i;
        cout << i << endl;
    }

    cout << "\nJumlah   =" << sum << endl;
    cout << "Rata-rata  =" << rata << endl;
    return 0;
}
