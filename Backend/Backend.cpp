#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int jamKerja, tarifPerJam, gaji;
    const double OVERTIME_RATE = 1.5;
    const int MAX_REGULAR_HOURS = 40;

    // Input jumlah jam kerja dan tarif per jam
    cout << "Masukkan jumlah jam kerja dalam seminggu: ";
    cin >> jamKerja;
    cout << "Masukkan tarif per jam: ";
    cin >> tarifPerJam;

    // Hitung gaji
    if (jamKerja > MAX_REGULAR_HOURS) {
        double jamLembur = jamKerja - MAX_REGULAR_HOURS;
        gaji = (MAX_REGULAR_HOURS * tarifPerJam) + (jamLembur * tarifPerJam * OVERTIME_RATE);
    } else {
        gaji = jamKerja * tarifPerJam;
    }

    // Output hasil
    cout << "Gaji total karyawan adalah: " << gaji << endl;

    return 0;
}
