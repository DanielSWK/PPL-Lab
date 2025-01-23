//Perkenalan Diri

#include <iostream>
using namespace std;

int main() {
    string nama, jurusan, hobi, citaCita;
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

    cout << "Cita-cita :";
    cin >> citaCita;
    
    cout << "\n--- Template Kalimat Perkenalan Diri ---\n";
    cout << "Halo semua!" << endl;
    cout << "Perkenalkan saya " << nama << " dari program studi " << jurusan << " angkatan " << angkatan << "." << endl;
    cout << "Saat ini saya berada di Semeseter " << semester << "." << endl;
    cout << "Hobi saya adalah " << hobi << "." << endl;
    cout << "Cita-cita saya adalah " << citaCita << "." << endl;

    return 0;
}
