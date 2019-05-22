#include<iostream>
using namespace std;

int main()

{
	cout<< "Mengkonversi Suhu dari Celcius(c) ke Reamur(r) dan Fahrenheit(f)";
	float c,r,f;
	cout<< "\nMasukkan Suhu Celcius : ";
	cin>> c;
	r = 4*c/5;
	cout<< "\nReamur : " << r;
	f = 9*c/5 + 32;
	cout<< "\nFahrenheit : "<< f;
	
}











