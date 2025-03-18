#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat variable inputan n

void input()
{ // Procedure input
    while (true)
    {
        cout << "Masukkan jumlah data pada array :"; // membuat inputan jumlagh elemen array
        cin >> n; // memanggil variable inputan n

        if (n <=20)
        {
        break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen. \n"; // menampilkan pesan jika data lebih dari 20
        }
    }
    
}