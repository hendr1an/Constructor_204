#include <iostream>
#include <string>
using namespace std;

class Barang {
private:
    string namaBarang;
    string kodeBarang;

public:
    // Constructor berparameter
    Barang(string nama, string kode) {
        namaBarang = nama;
        kodeBarang = kode;
    }

    // Fungsi untuk menampilkan informasi barang
    void tampilkanInformasi() {
        cout << "Nama Barang : " << namaBarang << endl;
        cout << "Kode Barang : " << kodeBarang << endl;
    }
};

int main() {
    // Membuat objek dari class Barang
    Barang barang1("Pulpen", "P001");

    // Menampilkan informasi barang
    barang1.tampilkanInformasi();

    return 0;
}