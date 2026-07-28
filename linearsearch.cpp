#include <iostream>
using namespace std;

int arr[20];   //inisialisasi variabel arr sebagai variabel global
int n;         //inisialisasi variabel n
int i;         //inisialisasi variabel i

void input()   //membuat prosedur input
{
    while (true) //membuat looping untuk menentukan panjang element array
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 20): ";
        cin >> n;
        if (n > 0 && n <= 20) //membuat kondisi jika n > 0 dan n <= 20
        {
            break;
        }
        else //membuat kondisi jika n > 0 dan n <= 20 tidak terpenuhi
        {
            cout << "\nMinimum Jumlah element adalah 1 dan Maksimum Jumlah element adalah 20\n" << endl;
        }
    }