#include<iostream>
using namespace std;

int faktorial(int n);

int main() {
	int f;
	cout<<"Masukkan Angka = ";
	cin>>f;
	cout<<"Hasil Faktorial dari "<<f<<"! = "<<faktorial(f);
}

int faktorial(int n) {
	int x=1;
	for(int i=n; i>=1; i--) {
		x*=i;
	}
	return x;
};
