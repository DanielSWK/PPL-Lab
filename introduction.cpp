//Perkenalan Diri

#include <iostream>
using namespace std;

int main() {
    string nama, jurusan, hobi, zodiak;
    int angkatan, semester;

    cout << "Nama Lengkap: ";
    getline(cin, nama);

    cout << "Program Studi: ";
    getline(cin, jurusan);

    cout << "Angkatan: ";
    cin >> angkatan;

    cout << "Semester saat ini: ";
    cin >> semester;

    cout << "Hobi: ";
    cin >> hobi;

    cout << "Zodiak :";
    cin >> zodiak;
    
    cout << "\n--- Template Kalimat Perkenalan Diri ---\n";
    cout << "Halo semua!" << endl;
    cout << "Perkenalkan saya " << nama << " dari program studi " << jurusan << " angkatan " << angkatan << "." << endl;
    cout << "Saat ini saya berada di Semeseter " << semester << "." << endl;
    cout << "Hobi saya adalah " << hobi << "." << endl;
    cout << "Zodiak saya adalah " << zodiak << "." << endl;

    return 0;
}
