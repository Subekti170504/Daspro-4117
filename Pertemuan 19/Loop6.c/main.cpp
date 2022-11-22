#include <iostream>

using namespace std;

int main()
{
    /*6. Buatlah Program seperti nomer 5, tentukan nilai maximal dan minimal dari data yang di masukan oleh user, sebagai
    simulasi, data yang anda masukan adalah sebagai berikut : 12, 31, 4, 22, 34, 50, 129, 33, 45, 32, 50, 99. Data
    terakhir (-99) tidak di hitung, nama file : loop6.c*/
    int x, max, min;
    for(int i = 0;; i++){
        cin >> x;

        if(x > max){
            max = x;
        }
        if(x < min && x != -99){
            min = x;
        }
        if(x == -99){
            cout << "Maksimal = " << max << endl;
            cout << "Minimal  = " << min << endl;
            break;
        }
    }
    return 0;
}
