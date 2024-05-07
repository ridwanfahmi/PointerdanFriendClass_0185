#include <iostream>
using namespace std;

class mahasiswa{
public:
	int nim;
	void showNim(){
		cout << "No Induk = " << nim << endl;
	}
};


int main() {
	mahasiswa mhs{ 1 }; //object mhs
	mhs.showNim(); //member acces operator

	mahasiswa& refMhs = mhs;  //pointer references refmhs
	refMhs.nim = 2;  //member acces operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs;  //pointer dereference mhs
	pMhs->nim = 3;   //arrow operator
	pMhs->showNim();
	return 0;
}