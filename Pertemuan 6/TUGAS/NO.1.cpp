#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
	int a, b;
	char lagi;
	atas:
		cout<<"Masukkan Bilangan = ";
		cin>>a;
		b=a%2;
		printf("Nilai %d %% 2 adalah = %d",a, b);
		printf("\n\nIngin Hitung Lagi? [Y/T]");
		lagi=getch();
		cout<<endl<<endl;
		if(lagi=='Y' || lagi=='y')
		goto atas;
		if(lagi=='T' || lagi=='t')
		goto akhir;
		akhir:
		getch();
}
