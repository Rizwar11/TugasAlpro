#include <iostream>
using namespace std;

// Deklarasi kelas
class Pakaian {
public:
    string jenis;
    string nama;
    int harga;

    // Metode untuk menampilkan informasi
    void tampilkan_info() {
        cout << "Jenis: " << jenis << endl;
        cout << "Nama: " << nama << endl;
        cout << "Harga: " << harga << endl;
    }
};

int main() {
    // Membuat objek dari kelas Pakaian
    Pakaian dipakai ;

    // Memberi nilai atribut objek
    dipakai.jenis = "Kemeja";
    dipakai.nama = "Boxy";
    dipakai.harga = 200000;

    // Memanggil metode untuk menampilkan informasi
    dipakai.tampilkan_info();

    return 0;
}