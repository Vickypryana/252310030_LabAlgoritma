#include<iostream>
#include<string>
using namespace std;

struct Buku{
	string Judul;
	string Penulis;
	string Penerbit;
	int Tahun;
};

int main(){
	Buku buku1 = {"The Language Instinct", "Steven Pinker", "William Morrow & Co.", 1994};
	Buku buku2 = {"Because Internet", "Gretchen McCulloch", "Riverhead Books", 2019};
	Buku buku3 = {"Rhetoric Made Plain", "Anthony C. Winkler", "Harcourt Brace Jovanovich", 1984};
	Buku buku4 = {"Thinking with Type", "Ellen Lupton", "Princeton Architectural Press", 2004};
	Buku buku5 = {"Word As Image", "Ji Lee", "Perigee", 2011};
	
	Buku daftarBuku[] = {buku1, buku2, buku3, buku4, buku5};
	int jumlahBuku = sizeof(daftarBuku) / sizeof(daftarBuku[0]);
	
	string cariJudul;
	cout<<"Masukkan judul buku yang ingin dicari: ";
	getline(cin, cariJudul);
	
	bool ditemukan = false;
	
	for(int i=0; i<jumlahBuku; ++i){
		if(daftarBuku[i].Judul==cariJudul) {
			cout<<"\nBuku ditemukan!"<<endl;
			cout<<"Judul: "<<daftarBuku[i].Judul<<endl;
			cout<<"Penulis: "<<daftarBuku[i].Penulis<<endl;
			cout<<"Penerbit: "<<daftarBuku[i].Penerbit<<endl;
			cout<<"Tahun: "<<daftarBuku[i].Tahun<<endl;
			ditemukan = true;
			break;
		}
	}
	
	if (!ditemukan){
		cout<<"Buku dengan judul '"<<cariJudul<<"' tidak ditemukan.";
	}
	
	return 0;
}
