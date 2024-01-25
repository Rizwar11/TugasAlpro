#include <iostream>

int main() {
    // Deklarasi dan inisialisasi matriks
    int matriksA[3][3] = {{1, 2}, {2, 3}};
    int matriksB[3][3] = {{5, 6}, {7, 8}};
    int hasil[3][3];

    // Melakukan perkalian matriks
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = matriksA[i][j] * matriksB[i][j];
        }
    }

    // Menampilkan hasil perkalian
    std::cout << "Hasil perkalian Matriks:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << hasil[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}