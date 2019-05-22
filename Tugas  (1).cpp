#include<iostream>
#include<math.h>
using namespace std;

int main()

{
	cout<< "Menghitung sisi miring segitiga siku-siku";
	float c, a, t; //c=sisi miring, a=alas, t=tinggi
	cout<< "\nMasukan Alas : ";
	cin>> a ;
	cout<<"Masukan Tinggi : ";
	cin>> t ;
	c = sqrt ((a*a)+(t*t));
	cout<< "\nSisi Miring : " << c;
	
}
	

