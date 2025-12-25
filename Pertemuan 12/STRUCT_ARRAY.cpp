#include<iostream>
using namespace std;

struct Produk{
	string nama;
	float harga;
};

int main()
{
	Produk produk[2];
	produk[0].nama="Sikat Gigi";
	produk[0].harga=14000.00;
	
	produk[1].nama="Sabun Mandi";
	produk[1].harga=5000.00;
	
	cout<<produk[0].nama<<endl<<produk[0].harga;
	return 0;
}
