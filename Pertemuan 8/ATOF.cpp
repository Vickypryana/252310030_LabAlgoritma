#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	char kata[20];
	float angka, a;
	
	cout<<"Masukkan Sembarang Angka = ";
	cin>>kata;
	
	angka=atof(kata);
	a=angka+5;
	
	cout<<"Hasil Perubahan ditambah dengan 5 = "<<a<<endl;
	
	getchar();
	return 0;
}
