#include <iostream>

using namespace std;

int main()

{
   setlocale(LC_CTYPE, "Polish");
	int suma;
   int a=1;
   int b;
   cout<<"Wpisz warto�� b: ";
   cin >>b;
    
    for(a =1; a<=b; a++)
    
    {
	cout << a<<endl;
	suma+=a;
}

	cout<< "Suma kolejnych liczb ca�kowitych: "<< suma <<endl;

    return 0;
}
