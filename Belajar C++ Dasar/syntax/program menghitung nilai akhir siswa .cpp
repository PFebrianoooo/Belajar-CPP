#include <iostream>
#include <string>

using namespace std;

main (){

    string nama;
    float aktif, tugas ,ujian;
    float MurniAktif , MurniUjian , MurniTugas , NilaiAkhir;

    cout << "program mengitung nilai akhir " << endl;

    while(true){
    cout << "--------------------------------------------------------------------------------------------------" << endl;
    cout << "nama siswa : " ; cin >> nama;
    cout << "nilai keaktifan : " ; cin >> aktif;
    cout << "nilai tugas : " ; cin >> tugas;
    cout << "nilai ujian : " ; cin >> ujian;


    MurniAktif = aktif * 0.20;
    MurniUjian = tugas * 0.30;
    MurniTugas = ujian * 0.50;
    NilaiAkhir = MurniAktif + MurniUjian + MurniTugas;

    cout << endl;

    cout << "siswa yang bernama " << nama << endl;
    cout << "dengan nilai presentasi yang dihasilkan." << endl;
    cout << "nilai keaktifan       *20%   : " << MurniAktif << endl;
    cout << "nilai tugas           *30%   : " << MurniUjian << endl;
    cout << "nilai ujian           *50%   : " << MurniTugas << endl;

    cout << "jadi siswa yang bernama " << nama << " memperoleh nilai akhir sebesar " << NilaiAkhir << endl;

    cout << endl;

    }







}

