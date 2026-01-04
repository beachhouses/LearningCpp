#include <iostream>
using namespace std;

class Mahasiswa {
private:
    string nama;
    int umur;

public:
    // Constructor tanpa parameter
    Mahasiswa() {
        nama = "Tidak diketahui";
        umur = 0;
        cout << "Object Mahasiswa dibuat (default constructor)" << endl;
    }

    // Constructor dengan parameter
    Mahasiswa(string n, int u) {
        nama = n;
        umur = u;
        cout << "Object Mahasiswa dibuat untuk: " << nama << endl;
    }

    // Method untuk menampilkan data
    void tampilkanData() {
        cout << "Nama  : " << nama << endl;
        cout << "Umur  : " << umur << endl;
    }

    // Destructor
    ~Mahasiswa() {
        cout << "Object Mahasiswa untuk " << nama 
             << " dihancurkan (destructor dipanggil)" << endl;
    }
};

int main() {
    cout << "Program dimulai" << endl;

    Mahasiswa mhs1("Andi", 20);
    mhs1.tampilkanData();

    cout << "Program akan selesai" << endl;
    return 0;
}
