#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char kalimat[100];
	char hasil[100];
	
	char *pKalimat;
	char *pHasil;
	
	cout<<"Masukkan Kalimat: ";
	cin.getline(kalimat, 100);
	
	pKalimat=kalimat;
	pHasil=hasil;
	
	int i=strlen(kalimat);
	
	while(i>0){
		*pHasil=*(pKalimat+i-1);
		pHasil++;
		i--;
	}
	
	*pHasil='\0';
	
	cout<<"Hasil: "<<hasil;
	
	return 0;
}
