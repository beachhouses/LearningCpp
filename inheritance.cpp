#include <iostream>
#include <string>
using namespace std;

// ===== Parent Class =====
class Diver {
protected:
    string nama;

public:
    Diver(string n) {
        nama = n;
    }

    void menyelam() {
        cout << nama << " sedang menyelam di laut." << endl;
    }
};

// ===== Child Class =====
class DeepSeaDiver : public Diver {
private:
    int kedalaman;

public:
    DeepSeaDiver(string n, int k) : Diver(n) {
        kedalaman = k;
    }

    void eksplorasi() {
        cout << nama << " menyelam hingga kedalaman "
             << kedalaman << " meter." << endl;
    }
};

// ===== Main Program =====
int main() {
    DeepSeaDiver diver1("Peii", 250);

    diver1.menyelam();     // Method dari parent class
    diver1.eksplorasi();  // Method milik child class

    return 0;
}
