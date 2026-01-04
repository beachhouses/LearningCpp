#include <iostream>

using namespace std;

class Manusia {
		public :
	//Properti
			int umur;
			string nama;
			string pekerjaan;
	//Metode
			void berjalan(){ cout << "Orang ini sedang berjalan" << endl; }
};

int main(){
	//Kode disini bermaksud membuat objek dengan nama "manusiaPertama"
		Manusia manusiaPertama;

		//Memberikan nilai pada sebuah properti
		manusiaPertama.nama = "Adam";
		manusiaPertama.umur = 999;
		
		cout << manusiaPertama.nama << endl;
		cout << manusiaPertama.umur << endl;

		//Memanggil metode sebuah kelas
		manusiaPertama.berjalan();

		return 0;
}