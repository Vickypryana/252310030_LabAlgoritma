#include<iostream>
using namespace std;

int main()
{
	int a, i, j;
	
	cout<<"Input lebar belah ketupat = ";
	cin>>a;
	cout<<endl;
	
	for(int i=0; i<=a; i++){
		for(j=0; j<(2*a); j++){
			if(i+j<=a-1)
			cout<<"*";
			else
			cout<<" ";
			
			if((i+a)<=j)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0; i<a; i++){
		for(j=0; j<(2*a); j++){
			if(i>=j)
			cout<<"*";
			else
			cout<<" ";
			
			if(i>=(2*a-1)-j)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
