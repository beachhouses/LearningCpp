#include <iostream>

using namespace std;

class Pacar {
    public :
    //Properti
        string nama;
        int umur;
        string sifat;

    //Metode
        void seringBilangSayang() {
            cout << "Aku sayang bgtt sama kamuu" << endl;
        }
};

int main(){
    Pacar pacarGue;

    pacarGue.nama = "Bubub";
    pacarGue.umur = 17;
    pacarGue.sifat = "nonchalant";

    cout << pacarGue.nama << endl;
    cout << pacarGue.umur << endl;
    cout << pacarGue.sifat << endl;

    pacarGue.seringBilangSayang();

    return 0;
}