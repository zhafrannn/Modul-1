#include<iostream>
using namespace std;

int main()

{
	cout<< "Menghitung luas dan keliling lingkaran (phi= 3.14)";
	cout<< endl;
	float r, phi = 3.14, Luas, Keliling;
	cout<< "\nMasukkan Jari-Jari(r) : ";
	cin>> r;
	Luas = phi*r*r;
	cout<< "\nLuas: " << Luas;
	Keliling = 2*phi*r;
	cout<< "\nKeliling: " << Keliling;
}
