#include<iostream>
using namespace std;

struct Tugas{
	float Matematika;
	float Inggris;
	float Pancasila;
	float Agama;
};

int main(){
	Tugas mahasiswa;
	float total=0;
	float rataRata=0;
	
	cout<<"Nilai Agama = ";
	cin>>mahasiswa.Agama;
	cout<<"Nilai B.Inggris = ";
	cin>>mahasiswa.Inggris;
	cout<<"Nilai Matematika = ";
	cin>>mahasiswa.Matematika;
	cout<<"Nilai Pancasila = ";
	cin>>mahasiswa.Pancasila;
	
	total = mahasiswa.Agama + mahasiswa.Inggris + mahasiswa.Matematika + mahasiswa.Pancasila;
	rataRata = total/4;
	
	cout<<"\nNilai Rata-Rata = "<<rataRata;
	
	if(rataRata >= 90){
		cout<<"\nNilai A";
	} else if(rataRata >= 80 && rataRata <= 89){
		cout<<"\nNilai B";
	} else if(rataRata >= 70 && rataRata <= 79){
		cout<<"\nNilai C";
	} else if(rataRata >= 60 && rataRata <= 69){
		cout<<"\nNilai D";
	} else{
		cout<<"\nNilai E";
	}
	
	return 0;
}
