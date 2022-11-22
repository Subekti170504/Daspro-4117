#include <iostream>

using namespace std;

int main()
{
    /*5. Buatlah Program untuk membaca suatu inputan nilai integer dan selama data yang
    di inputkan bukan -99, maka program akan terus meminta user untuk melakukan
    inputan , nama file : loop5.c*/
    cout << "Program Ini Akan Berhenti Jika Anda Menginputkan Angka -99\n" << endl;
    int x;

    for(int i = 0;; i++){
        cout << "Masukan Nilai Anda : ";
        cin >> x;
        if(x == -99){
            cout << "\nKeluar Karena Break" << endl;
            break;
        }
    }
    return 0;
}
