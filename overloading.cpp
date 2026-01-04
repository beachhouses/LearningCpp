#include <iostream>
using namespace std;

class OxygenTank {
public:
    int liter;

    OxygenTank(int l = 0) {
        liter = l;
    }

    // Display isi tabung
    void display() {
        cout << "Oksigen: " << liter << " liter" << endl;
    }

    // Unary operator (pre-increment)
    void operator++() {
        liter += 10;
    }

    // Arithmetic operator (+)
    OxygenTank operator+(OxygenTank other) {
        return OxygenTank(liter + other.liter);
    }
};

int main() {
    OxygenTank tank1(50);
    OxygenTank tank2(30);

    tank1.display();
    ++tank1;               // isi ulang oksigen
    tank1.display();

    OxygenTank tank3 = tank1 + tank2; // gabung oksigen
    tank3.display();

    return 0;
}