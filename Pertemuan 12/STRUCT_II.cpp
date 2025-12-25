#include<iostream>
using namespace std;

struct Mahasiswa{
	string Nama;
	string Kelas;
	int NPM;
	float ipk;
} Helena, Antoni;

int main()
{
	Mahasiswa Joshua{"Joshua", "TI-23-KA", 232310013, 3.56};
	cout<<Joshua.NPM;
	return 0;
}
