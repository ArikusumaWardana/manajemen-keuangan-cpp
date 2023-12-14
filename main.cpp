#include <iostream>
using namespace std;

int main() {
    int saldoAwal = 1000000;
    int saldoTambah, saldoTarik;
    char pilihan;

    cout << "Selamat datang, Arik!\n";
    cout << "Saldo awal tabungan Anda: Rp " << saldoAwal << endl;

    do {
        cout << "\nSilahkan Pilih Menu : \n";
        cout << "A. Tambah Saldo\n";
        cout << "B. Tarik Saldo\n";
        cout << "C. Berhenti\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
            case 'A':
            case 'a':
                cout << "Masukkan jumlah uang yang ingin ditambahkan: Rp ";
                cin >> saldoTambah;
                saldoAwal += saldoTambah;
                break;
            case 'B':
            case 'b':
                cout << "Masukkan jumlah uang yang ingin ditarik: Rp ";
                cin >> saldoTarik;
                if (saldoTarik <= saldoAwal) {
                    saldoAwal -= saldoTarik;
                } else {
                    cout << "Saldo tidak mencukupi. Coba lagi.\n";
                }
                break;
            case 'C':
            case 'c':
                cout << "Terima kasih, Arik! Sistem akan dihentikan!\n";
                break;
            default:
                cout << "Pilihan tidak valid. Coba lagi.\n";
        }

        if (pilihan != 'C' && pilihan != 'c') {
            cout << "Saldo Anda saat ini: Rp " << saldoAwal << endl;
            cout << "Apakah ingin melanjutkan? (Y/N): ";
            cin >> pilihan;
        }

    } while ((pilihan == 'Y' || pilihan == 'y') && saldoAwal > 0);

    if (saldoAwal <= 0) {
        cout << "Saldo Anda telah habis. Sampai jumpa lagi, Arik!\n";
    }

    return 0;
}
