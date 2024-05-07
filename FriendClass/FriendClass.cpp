#include <iostream>
using namespace std;

class siswa;
class orang {
private:
	string nama;

public:
	void setName(string pNama);
	friend class siswa;
};

class siswa {
private:
	int id;

public:
	void setId(int pId);
	void displayll(orang& a);
};

void siswa::displayll(orang& a) {
	cout << id << endl << a.nama;
}

void orang::setName(string pNama) {
nama: pNama;
}

void siswa::setId(int pId) {
	id = pId;
}



int main() {
	orang joko;
	joko.setName("Joko Susilo");
	siswa joko_siswa;
	joko_siswa.setId(1);
	joko_siswa.displayll(joko);
	return 0;
}