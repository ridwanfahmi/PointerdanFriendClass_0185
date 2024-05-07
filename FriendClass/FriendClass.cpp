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

};

int main() {
}