#include<iostream>
using namespace std;

int main()
{
	int number=0;
	char again;
	
	do{
		unsigned long long fac=1;
	
		cout<<"Masukkan angka = ";
		cin>>number;
	
	if(number<0){
		cout<<"Faktorial tidak bisa didefinisikan untuk bilangan negatif."<<endl;
	}
	else{
	if(number==0){
		fac=1;
	}
	else{
	for(int i=1; i<=number; ++i){
		fac*=i;
	}
}
	cout<<"Hasil "<<number<<"! = "<<fac<<endl<<endl;
	
		cout<<"Ulangi lagi? (y/n) : ";
		cin>>again;
		cout<<endl;
	}
}
	while(again=='y' || again=='Y');
	cout<<"Tamat.";
	
	return 0;
}
