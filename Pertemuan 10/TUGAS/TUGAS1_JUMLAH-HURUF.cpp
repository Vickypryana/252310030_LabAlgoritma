#include<iostream>
using namespace std;

int jumlahhuruf();

int main()
{
	int hasil=jumlahhuruf();
	
	cout<<"Jumlah karakter dalam kalimat adalah = "<<hasil<<endl;
	return 0;
}

int jumlahhuruf(){
	string kalimat;
	
	cout<<"Masukkan Kalimat: ";
	getline(cin, kalimat);
	return kalimat.length();
}
