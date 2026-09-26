#include <iostream>

using namespace std;

int main() {
    int pilihan;
    do{
        cout << "1. Tambah\n2. Kurang\n3. Kali\n4. Bagi\n0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: /*TODO*/ break;
            case 2: /*TODO*/ break;
            case 3: /*TODO*/ break;
            case 4: /*TODO*/ break;
            case 0: cout << "Selesai."; break;
            default: cout << "Pilihan Invalid.";
        }
    } while (pilihan != 0);

}