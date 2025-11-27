#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char kalimat1[20]={"Teknik"};
	char kalimat2[20]={"Informatika"};
	char kalimat3[20]={"Pindah"};
	
	cout<<kalimat1<<endl;
	cout<<kalimat2<<endl;
	cout<<endl;
	
	cout<<"Hasil Penggabungan = ";
	strcpy(kalimat3, kalimat2);
	cout<<kalimat1<<kalimat3;
	
	getchar();
	return 0;
}
