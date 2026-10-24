#include <iostream>

using namespace std;

int main() {
    int pilihan;
    double a, b;
    do {
        cout << "1. Tambah\n2. Kurang\n3. Kali\n4. Bagi\n0. Keluar\n" << endl;
        cout << "Pilih: ";
        cin >> pilihan;
        cout << "Masukkan angka pertama: ";
        cin >> a;
        cout << "Masukkan angka kedua: ";
        cin >> b;
        switch (pilihan) {
            case 1: 
            cout << "Hasil: " << a + b << endl;
            break;
            case 2: 
            cout << "Hasil: " << a - b << endl;
            break;
            case 3: 
            cout << "Hasil: " << a * b << endl;
            break;
            case 4:
            if (b==0) {
                cout << "Maaf, tidak bisa melakukan pembagian dengan 0, coba angka lain" << endl;
            } else {
                cout << "Hasil: " << a/b << endl;
            } 
            break;
            case 0: cout << "Sampai jumpa!\n"; break;
            default: cout << "Invalid\n";
        }
        
    } while(pilihan != 0);

    return 0;
}