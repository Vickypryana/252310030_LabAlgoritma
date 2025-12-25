#include<iostream>
using namespace std;

// Fungsi tukar menggunakan pointer
void tukar(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int A, B;
	cout<<"Masukkan nilai A = ";
	cin>>A;
	cout<<"Masukkan nilai B = ";
	cin>>B;
	
	// Proses Penukaran
	tukar(&A, &B);
	
	cout<<"\0Hasil Penukaran:"<<endl;
	cout<<"A = "<<A<<endl;
	cout<<"B = "<<B;
	
	return 0;
}
