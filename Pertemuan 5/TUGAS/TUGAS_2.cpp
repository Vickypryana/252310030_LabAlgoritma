#include<iostream>
using namespace std;

int main()
{
	int x, i;
	bool is_prime=true;
	
	cout<<"Masukkan angka = ";
	cin>>x;
	
	if(x<=1){
		is_prime=false;
	}
	else{
		for(i=2; i<=x/2; ++i){
			if(x%i==0){
				is_prime=false;
			}
		break;
		}
		for(i=3; i<=x/3; ++i){
			if(x%i==0){
				is_prime=false;
			}
		break;
		}
		for(i=5; i<=x/5; ++i){
			if(x%i==0){
				is_prime=false;
			}
		break;
		}
		for(i=7; i<=x/7; ++i){
			if(x%i==0){
				is_prime=false;
			}
		break;
		}
		for(i=9; i<=x/9; ++i){
			if(x%i==0){
				is_prime=false;
			}
		break;
	}
	}
	
	if(is_prime)
	cout<<x<<" termasuk bilangan PRIMA."<<endl;
	else
	cout<<x<<" bukan termasuk bilangan prima."<<endl;
	return 0;
}
