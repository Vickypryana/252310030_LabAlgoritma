#include<iostream>
using namespace std;

int main()
{
	float a, b, c, d, e, lucky;
	cout<<"Masukkan Nomor Keuntungan = ";
	cin>>lucky;
	cout<<"Masukkan Nilai A = ";
	cin>>a;
	cout<<"Masukkan Nilai B = ";
	cin>>b;
	cout<<"Masukkan Nilai C = ";
	cin>>c;
	cout<<"Masukkan Nilai D = ";
	cin>>d;
	
	e=((a*c)-b)/d;
	cout<<"\nProses... ";
	system ("pause");
	
	if(e==lucky){
		cout<<"\nBerhasil! Nilai kamu adalah "<<e<<endl;
		cout<<"Lucky!";
	}
	else{
		cout<<"Gagal! Nilai kamu adalah "<<e<<endl;
	}
	
	return 0;
}
