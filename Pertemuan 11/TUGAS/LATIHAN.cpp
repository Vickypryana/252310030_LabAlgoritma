#include<iostream>
using namespace std;

void pangkat(int *x)
{
	*x *= (*x) * (*x);
}

int main()
{
	int x=3;
	pangkat(&x);
	cout<<x<<endl;
}
