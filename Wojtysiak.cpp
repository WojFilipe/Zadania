#include <cstdlib>
#include <iostream>
#define maxwierszy 50
#define maxkolumn 50
using namespace std;
int main(int argc, char *argv[])
{
	setlocale(LC_CTYPE, "Polish");
 	int i,j,m,n,sumaelementow,pozm,pozn;
 	int tab[maxwierszy][maxkolumn];
 	cout << "\n\nNadaj dwuwymiarowej tablicy m,n-elementowej, z klawiatury, warto�ci element�w w p�tli.\nWyprowad�:\na) zawarto�� tablicy,\nb) sume wszystkich element�w w tablicy,\nc) dowolny wybrany przez u�ytkownika element [m,n].\n";
 
	cout<< "Wprowad� liczbe wierszy w tablicy: ";
	cin>>m;
	cout<< "Wprowad� liczbe kolumn w tablicy: ";
	cin>>n;
	cout << "\nTwoja tablica ma rozmiar: " << m << "X" << n << "\n";
 
	cout<< "\nWprowad� elementy tablicy (kolumna po kolumnie)" <<endl;
	for(j=0;j<n;j++){
		for(i=0;i<m;i++){
			cout << "Wprowad� element"<<"["<<i<<"]"<<"["<<j<<"]: ";
			cin>> tab[i][j];
			sumaelementow = sumaelementow + tab[i][j];
	}
 } 
 	cout<< "\nTablica to:  " <<endl;
 	for(i=0;i<m;i++){
 		for(j=0;j<n;j++)
 			cout<<tab[i][j] << " ";
 			cout<<endl;
 }
	cout << "\nSuma wprowadzonych element�w w tablicy to: " << sumaelementow << "\n\nWprowad� element do wy�wietlenia(indeks od 0):\nPozycja m: ";
	cin >> pozm;
	cout << "Pozycja n: ";
	cin >> pozn;
	if (pozm<m){
		if(pozn<n){
			cout << "Element ["<< pozm << "]["<< pozn << "] to: " << tab[pozm][pozn] << "\n\n";
		}
	}
	else {
		cout << "Brak takiej pozycji!\n\n";
	}
	
 
	system( "PAUSE" );
	return EXIT_SUCCESS;
}
