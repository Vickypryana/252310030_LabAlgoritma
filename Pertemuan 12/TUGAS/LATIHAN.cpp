#include<iostream>
using namespace std;

struct Buku{
	string Judul;
	string Penulis;
	string Penerbit;
	string Tanggal;
};

int main(){
	Buku buku[2];
	
	cout<<"Masukkan Data Buku 1:"<<endl;
	cout<<"Judul: ";
	cin>>buku[0].Judul;
	cout<<"Penulis: ";
	cin>>buku[0].Penulis;
	cout<<"Penerbit: ";
	cin>>buku[0].Penerbit;
	cout<<"Tanggal: ";
	cin>>buku[0].Tanggal;
	
	cout<<"\nMasukkan Data Buku 2:"<<endl;
	cout<<"Judul: ";
	cin>>buku[1].Judul;
	cout<<"Penulis: ";
	cin>>buku[1].Penulis;
	cout<<"Penerbit: ";
	cin>>buku[1].Penerbit;
	cout<<"Tanggal: ";	
	cin>>buku[1].Tanggal;
	
	cout<<"\nBuku 1:"<<endl;
	cout<<buku[0].Judul<<endl<<buku[0].Penulis<<endl<<buku[0].Penerbit<<endl<<buku[0].Tanggal<<endl;
	cout<<"\nBuku 2:"<<endl;
	cout<<buku[1].Judul<<endl<<buku[1].Penulis<<endl<<buku[1].Penerbit<<endl<<buku[1].Tanggal;
}
