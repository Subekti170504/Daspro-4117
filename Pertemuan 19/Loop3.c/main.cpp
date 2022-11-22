#include <iostream>

using namespace std;

int main()
{
    /*3. Buatlah Program untuk mencetak angka integer dari 100 hingga 1 menggunakan loop
    for, dan akan berhenti (break) bila mencapai angka 55, nama file : loop3.c*/
    int i;
    for(i = 100; i > 0; i--){
        if(i < 55){
            break;
        }
        cout << i << endl;
    }
    return 0;
}
