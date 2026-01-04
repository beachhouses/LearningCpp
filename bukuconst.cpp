#include <iostream>
using namespace std;

class Buku {
private:
    string judul;
    string penulis;
    int tahun;

public:
    // Constructor 1: tanpa parameter
    Buku() {
        judul = "Tidak ada judul";
        penulis = "Tidak diketahui";
        tahun = 0;
        cout << "Constructor default dipanggil" << endl;
    }

    // Constructor 2: 1 parameter
    Buku(string j) {
        judul = j;
        penulis = "Tidak diketahui";
        tahun = 0;
        cout << "Constructor dengan 1 parameter dipanggil" << endl;
    }

    // Constructor 3: 3 parameter
    Buku(string j, string p, int t) {
        judul = j;
        penulis = p;
        tahun = t;
        cout << "Constructor dengan 3 parameter dipanggil" << endl;
    }

    void tampilkanInfo() {
        cout << "Judul   : " << judul << endl;
        cout << "Penulis : " << penulis << endl;
        cout << "Tahun   : " << tahun << endl;
        cout << "---------------------" << endl;
    }
};

int main() {
    Buku b1;  
    b1.tampilkanInfo();

    Buku b2("Pemrograman C++");
    b2.tampilkanInfo();

    Buku b3("Object Oriented Programming", "Bjarne Stroustrup", 2013);
    b3.tampilkanInfo();

    return 0;
}