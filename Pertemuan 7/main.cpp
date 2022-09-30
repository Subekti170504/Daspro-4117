#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Subekti Wahyu Aji \nA11.2022.14627 \n4117" << endl;
    int a;
    cout << "\nMasukan Bilangan Genap 25-50: ";
    cin >> a;

    if (a % 2 == 0 && 25<=a && a<=50){
        cout << "Bilangan Sesuai" << endl;
    }
    else{
        cout << "Bilangan Tidak Sesuai" << endl;
    }

    int b;
    cout << "\nMasukan Bilangan Ganjil Antara Lebih Dari 13 Atau Kurang Dari 5: ";
    cin >> b;

    if (b % 2 == 1 && 13<b || b % 2 == 1 && b<5){
        cout << "Bilangan Sesuai" << endl;
    }
    else{
        cout << "Bilangan Tidak Sesuai" << endl;
    }

    int c;
    cout << "\nMasukan Bilangan Bulat Antara 25-50 Atau Bilangan Ganjil Antara 3-15: ";
    cin >> c;

    if (25 <= c && c <= 50 || c % 2 == 1 && 3 <= c && c <= 15){
        cout << "Bilangan Sesuai" << endl;
    }
    else{
        cout << "Bilangan Tidak Sesuai" << endl;
    }

    int Jurusan;
    cout << "\nJurusan: \n1. Teknik Informatika \n2. Sistem Informasi \n3. DKV";
    cout << "\nMasukan Jurusan Anda: ";
    cin >> Jurusan;

    if (Jurusan == 1){
        cout << "Jurusan Anda Adalah Teknik Informatika"<< endl;
    }
    else if (Jurusan == 2){
        cout << "Jurusan Anda Adalah Sistem Informasi"<< endl;
    }
    else if (Jurusan == 3){
        cout << "Jurusan Anda Adalah DKV"<< endl;
    }
    else{
        cout << "Jurusan Anda Tidak Diketahui"<< endl;
    }
    return 0;
}
