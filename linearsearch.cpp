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
      //display untuk menginputkan isi masing" element array
    cout << "\n====================\n";
    cout << "Masukkan element Array\n";
    cout << "======================\n";

    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "> ";
        cin >> arr[i];
    }
}
void linearSearch()  //membuat prosedur linearSearch
{
    char ch; //inisialisasi variabel char ch untuk pilihan lanjut atau tidak
    int ctr; //inisialisasi variable ctr untuk melihat jumlah data dibandingkan
    int item; //inisialisasi variabel item untuk menginput data yang akan

    //membuat looping untuk mencari element array menggunakan linear sort
    do
    {
         cout << "\nMasukkan element yang ingin dicari";
        cin >> item;

        ctr = 0;
        i = 0;

        while (i < n) //step 3
        {
            ctr++;
            if (arr[i] == item) //membuat kondisi jika data ditemukan
            {
                cout << "\n" << item << "ditemukan pada posisi ke " << (i + 
                    1) << endl;
                break;
            }
            i++; //step 4
        }
        if (i > n) //step 5
        {
            cout << "\n" << item << "Tidak ditemukan di dalam array";
        }

        cout << "\nJumlah Nilai dibandingkan = " << ctr << endl;

        cout << "\nLanjut Ke Pencarian Lain ? (y/t)";
        cin >> ch;
    }
    while (ch == 'y' || ch == 'Y');
}
void display() //membuat prosedur display
{
    cout << "\nElement Array adalah : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "";
        cout << endl;
    }