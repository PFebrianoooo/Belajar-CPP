#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int acak, pilih;
    srand(time(NULL));

    while (true) {
        system("cls");
        //Menampilkan Menu Program
        cout << "--- Selamat Datang di Permainan Batu Gunting Kertas ---\n\n";
        cout << "--- Pilihan ---\n";
        cout << " [1]. Batu\n";
        cout << " [2]. Kertas\n";
        cout << " [3]. Gunting\n";
        cout << " [4]. Keluar\n\n";
        cout << " Masukkan Pilihan Anda: ";
        cin >> pilih;
        cout << endl;

        if (pilih == 4) {
            cout << "\nTERIMA KASIH TELAH BERMAIN ";
            break;//Keluar dari loop jika memilih menu 4 (Keluar)
        } else if (pilih < 1 || pilih > 3) {
            cout << "\nPilihan yang Anda Pilih Tidak Tersedia\n";
            cin.ignore();
            cin.get();
            continue;//Kembali ke awal loop jika pilihan tidak valid
        }

        acak = rand() % 3 + 1;//Menghasilkan pilihan acak komputer

        cout << "Pilihan Kamu\t\t: ";//Menentukan Pilihan dari Pemain
        switch (pilih) {
            case 1:
                cout << "Batu";
                break;
            case 2:
                cout << "Kertas";
                break;
            case 3:
                cout << "Gunting";
                break;
        }
        cout << endl;
		
        cout << "Pilihan Komputer\t: ";//Menampilkan Pilihan dari Komputer
        switch (acak) {
            case 1:
                cout << "Batu";
                break;
            case 2:
                cout << "Kertas";
                break;
            case 3:
                cout << "Gunting";
                break;
        }
        cout << endl;
		
		//Menentukan Pemenang
        if (pilih == acak) {
            cout << "Hasil : Seri!!!" << endl;
        } else if ((pilih == 1 && acak == 3) ||
                   (pilih == 2 && acak == 1) ||
                   (pilih == 3 && acak == 2)) {
            cout << "Hasil : Anda Menang " << endl;
        } else {
            cout << "Hasil : Anda Kalah" << endl;
        }

        cout << endl << endl;
        cin.ignore();
        cin.get();
    }

    return 0;
}