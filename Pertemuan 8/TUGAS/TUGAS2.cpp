#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char kalimat[100]={"KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN"}, kalimat_baru[100];
	
	cout<<kalimat<<endl;

	for(int i=0; i<strlen(kalimat); i++){
		if(kalimat[i]>='a' && kalimat[i]<='z'){
			kalimat_baru[i]=toupper(kalimat[i]);
		}
		else{
			kalimat_baru[i]=tolower(kalimat[i]);
		}
	}
	
	cout<<"Hasil = ";
	
	int x=strlen(kalimat_baru);
	for(int i=x-1; i>=0; i--){
		cout<<kalimat_baru[i];
	}
	
	getchar();
	return 0;
}
