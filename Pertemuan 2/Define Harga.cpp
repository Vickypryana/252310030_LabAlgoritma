#include <iostream>
#define harga 4500.02
using namespace std;

int main()
{
	float jumlah, total;
	
	cout<<"Masukkan jumlah barang = ";
	cin>>jumlah;
	total=harga*jumlah;
	cout<<"Yang harus dibayar = "<<total;
	
	return 0;
}
