#include <iostream>

using namespace std;

int main()
{
    //Soal No 3
    int x = 20;
    while(x <= 35){
        if(x % 2 == 1){
            cout << x << endl;
        }
        x++;
    }

    //Soal No 4
    int x;
    int hasil = 1;
    cout << "Nilai faktorial: " << endl;
    cin >> x;

    for(int i = x; i >= 1; i--){
        hasil = hasil * i;
        }
        cout << hasil;
    return 0;
}
