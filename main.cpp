#include "header.h"

int main() {
    simpul L = NULL;
    int choose;
    do {
        cout<< "--------------------------\n"
            << "           MENU\n"
            << "--------------------------\n"
            << " 1. Tambah Mahasiswa\n"
            << " 2. Tambah Kehadiran Mahasiswa\n"
            << " 3. Cetak Seluruh Data\n"
            << " 0. Keluar\n"
            << "--------------------------\n"
            << "Masukan pilihan : ";
        cin >> choose;
        switch (choose) {
        case 1:
            {
                string nama;
                cout << "Masukkan Nama Mahasiswa: ";
                cin >> nama;
                Sisip(L, nama);
                cout << "Mahasiswa " << nama << " ditambahkan." << endl;
                break;
            }
        case 2:
            {
                string nama;
                int pertemuan;
                cout << "Masukkan Nama Mahasiswa: ";
                cin >> nama;
                cout << "Masukkan Nomor Pertemuan: ";
                cin >> pertemuan;
                TambahKehadiran(L, nama, pertemuan);
                break;
            }
        case 3:
            Cetak(L);
            break;
        default:
            cout << "Pilihan tidak tersedia";
            break;
        }
    } while (choose != 0);
    return 0;
}
