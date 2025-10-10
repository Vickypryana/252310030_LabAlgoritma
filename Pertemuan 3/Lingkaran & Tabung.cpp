#include<iostream>
#include<math.h>
using namespace std;

int main(){
	cout<<"[Lingkaran]"<<endl<<endl;
	
	int r;
	double luas;
	cout<<"Masukkan jari-jari = ";
	cin>>r;
	luas=3.14*pow(r,2);
	cout<<"Hasil luas lingkarannya adalah = "<<luas<<endl<<endl;
	
	getchar();
	
	cout<<"[Tabung]"<<endl<<endl;
	
	int r2,t;
	double volume;
	cout<<"Masukkan jari-jari = ";
	cin>>r2;
	cout<<"Masukkan tinggi = ";
	cin>>t;
	volume=3.14*pow(r2,2)*t;
	cout<<"Hasil volume tabungnya adalah = "<<volume;
	
	return 0;
}
