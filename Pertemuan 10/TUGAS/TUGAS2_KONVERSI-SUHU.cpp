#include<iostream>
using namespace std;

int konversisuhu(int pilihan)
{
	int suhu, hasil;
	switch(pilihan){
		case 1:
			cout<<"Masukkan suhu dalam Fahrenheit = ";
			cin>>suhu;
			hasil=(suhu-32)*5/9;
			break;
		case 2:
			cout<<"Masukkan suhu dalam Kelvin = ";
			cin>>suhu;
			hasil=suhu-273;
			break;
		case 3:
			cout<<"Masukkan suhu dalam Reamur = ";
			cin>>suhu;
			hasil=suhu*5/4;
			break;
		case 4:
			cout<<"Masukkan suhu dalam Celcius = ";
			cin>>suhu;
			hasil=(suhu*9/5)+32;
			break;
		case 5:
			cout<<"Masukkan suhu dalam Kelvin = ";
			cin>>suhu;
			hasil=(suhu-273)*9/5+32;
			break;
		case 6:
			cout<<"Masukkan suhu dalam Reamur = ";
			cin>>suhu;
			hasil=(suhu*9/4)+32;
			break;
		case 7:
			cout<<"Masukkan suhu dalam Celcius = ";
			cin>>suhu;
			hasil=suhu*4/5;
			break;
		case 8:
			cout<<"Masukkan suhu dalam Fahrenheit = ";
			cin>>suhu;
			hasil=(suhu-32)*4/9;
			break;
		case 9:
			cout<<"Masukkan suhu dalam Kelvin = ";
			cin>>suhu;
			hasil=(suhu-273)*4/5;
			break;
		case 10:
			cout<<"Masukkan suhu dalam Celcius = ";
			cin>>suhu;
			hasil=suhu+273;
			break;
		case 11:
			cout<<"Masukkan suhu dalam Fahrenheit = ";
			cin>>suhu;
			hasil=(suhu-32)*5/9+273;
			break;
		case 12:
			cout<<"Masukkan suhu dalam Reamur = ";
			cin>>suhu;
			hasil=(suhu*5/4)+273;
			break;
		default:
			cout<<"Pilihan tidak valid."<<endl;
			hasil=0;
			break;
	}
	return hasil;
}

int main()
{
	int pilihan, hasil;
	cout<<"Pilih konversi suhu:\n";
	cout<<"1. Fahrenheit -> Celcius\n";
	cout<<"2. Kelvin -> Celcius\n";
	cout<<"3. Reamur -> Celcius\n";
	cout<<"4. Celcius -> Fahrenheit\n";
	cout<<"5. Kelvin -> Fahrenheit\n";
	cout<<"6. Reamur -> Fahrenheit\n";
	cout<<"7. Celcius -> Reamur\n";
	cout<<"8. Fahrenheit -> Reamur\n";
	cout<<"9. Kelvin -> Reamur\n";
	cout<<"10. Celcius -> Kelvin\n";
	cout<<"11. Fahrenheit -> Kelvin\n";
	cout<<"12. Reamur -> Kelvin\n\n";
	cout<<"Masukkan pilihan (1-12): ";
	cin>>pilihan;
	
	int hasilKonversi=konversisuhu(pilihan);
	
	cout<<"Hasil Konversi = "<<hasilKonversi<<endl;
	return 0;
}

