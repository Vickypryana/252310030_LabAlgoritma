#include<iostream>
using namespace std;

int main(){
	int x=50; // nilai awal x
	
	int a,b,c,d,e;
	
	a=x>5+5; // mendeklarasikan variabel a
	b=x>100; // mendeklarasikan variabel b
	c=a&&b; // mendeklarasikan variabel c
	d=a||b; // mendeklarasikan variabel d
	e=!(c); // mendeklarasikan variabel e
	
	cout<<"\nNilai a = x > 5 + 5 = "<<a<<endl; // menampilkan output hasil nilai a
	cout<<"\nNilai b = x > 100 = "<<b<<endl; // menampilkan output hasil nilai b
	cout<<"\nNilai c = a && b = "<<c<<endl; // menampilkan output hasil nilai c
	cout<<"\nNilai d = a || b = "<<d<<endl; // menampilkan output hasil nilai d
	cout<<"\nNilai e = ! (c) = "<<e<<endl; // menampilkan output hasil nilai e
	
	getchar();
}
