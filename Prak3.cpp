#include <iostream>
using namespace std;

//Deklarasi Fungsi
string CekGenapGanjil(int bilangan);

//Fungsi utama (main)
int main() {
    int angka;

    cout << "=== Program Cek Bilangan Ganjil atau Genap ===" << endl;
    cout << "Masukkan sebuah bilangan: ";
    cin >> angka;

    //Pemanggil fungsi CekGenapGanjil()
    string hasil = CekGenapGanjil(angka);

    //Menampilkan hasil
    cout << "Bilangan " << angka << " adalah " << hasil << "." << endl;

    return 0;
}

//Definisi fungsi CekGenapGanjil
//Fungsi menerima satu parameter dan mengembalikan string
string CekGenapGanjil(int bilangan) {
    if (bilangan % 2 == 0)
    return "Genap";
    else
        return "Ganjil";
}