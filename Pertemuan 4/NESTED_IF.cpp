#include<iostream>
using namespace std;

int main()
{
	float pendapat, jasa=0, komisi=0, total=0;
	cout<<"Pendapatan Hari Ini = Rp. ";
	cin>>pendapat;
	if(pendapat >=0 && pendapat <=200000){
		jasa=10000;
		komisi=0.1*pendapat;
	}
	else{
		if(pendapat<=500000){
			jasa=20000;
			komisi=0.15*pendapat;
		}
		else{
			jasa=30000;
			komisi=0.2*pendapat;
		}
	}
	/*Menghitung Total*/
	total=komisi+jasa;
	cout<<"Uang Jasa = Rp. "<<jasa<<endl;
	cout<<"Uang Komisi = Rp. "<<komisi<<endl;
	cout<<"===================================="<<endl;
	cout<<"Hasil Total = Rp. "<<total<<endl;
	getchar();
}
