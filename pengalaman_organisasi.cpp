#include <iostream>
#include <string>
using namespace std;

int main() {
    // Deklarasi variabel
    string nama, jurusan, pengalaman;

    // Input dari user
    cout << "Masukkan nama Anda: ";
    getline(cin, nama);
    cout << "Masukkan jurusan Anda: ";
    getline(cin, jurusan);
    cout << "Ceritakan pengalaman organisasi Anda: ";
    getline(cin, pengalaman);

    // Output perkenalan
    cout << "\n--- Perkenalan Diri ---\n";
    cout << "Nama: " << nama << endl;
    cout << "Jurusan: " << jurusan << endl;
    cout << "Pengalaman Organisasi: " << pengalaman << endl;

    return 0;
}
