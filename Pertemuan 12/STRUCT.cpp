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
//	Helena.Nama="Helena Jemina";
//	Antoni.NPM=242310024;
//	
//	cout<<Helena.Nama<<endl<<Antoni.NPM;
//	return 0;
	
	Mahasiswa Joshua;
	Joshua.Nama="Joshua Chrisensa";
	Joshua.Kelas="TI-23-KA";
	Joshua.NPM=232310013;
	Joshua.ipk=3.8;
	
	cout<<Joshua.Nama;
	return 0;
}
