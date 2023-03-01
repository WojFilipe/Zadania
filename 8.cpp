#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");	
	
	int startm,startn,endm,endn,u,r,g,h,z,x,klucz;
	int tablica[4][4] = { {5,7,13,22}, {88,100,3,2}, {33,7,2,3}, {7,3,15,2} };
	cout<< "\nCala zdefiniowana tablica w programie to:  " <<endl;
	for(u=0;u<4;u++){
		for(r=0;r<4;r++)
			cout<< " " << tablica[u][r] << " ";
			cout<<endl;
	}
	cout <<  "\nZakres wyboru prostok¹ta wyszukiwania to: od [0][0] do [3][3]\n\n\nWprowadŸ pozycje pocz¹tkow¹ szukania:\nPozycja pocz¹tkowa M: ";
	cin >> startm;
	cout << "Pozycja pocz¹tkowa N: ";
	cin >> startn;
	cout << "\nWprowadŸ pozycje koñcow¹ szukania:\nPozycja koñcowa M: ";
	cin >> endm;
	cout << "Pozycja koñcowa N: ";
	cin >> endn;
	cout << "\nPozycja startowa szukania:[" << startm <<"]["<<startn<<"] | Pozycja koñcowa szukania:[" << endm << "]["<<endn<<"]";
	cout<< "\n\nW wybranej pozycji znajduj¹ siê wartoœci:  " <<endl;
 	
	for(z=startm;z<=endm;z++){
		for(x=startn;x<=endn;x++)
			cout<<tablica[z][x] << " ";
			cout<<endl;
	}
 
 	cout << "\nWpisz klucz do poszukania: ";
	cin >> klucz;
  	
	for (int i = startm; i <= endm; i++){
		for (int j = startn; j <= endn; j++){
			if (tablica[i][j] == klucz){
				cout << "Klucz numer " << klucz << " znajduje sie w indeksie ["  << i << "][" << j << "]\n" ;
            }
		}
		
	}
}


	

	
	
	
	
	
	
	
	


