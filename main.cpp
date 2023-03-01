#include <iostream>
using namespace std;

int main()
{
	int silnia = 1;
    int n;

	cout<<"Podaj liczbe do silni: !";
	cin>>n;

	for(int i =n;i>1;i--)
		silnia*=i; 

	cout<<"silnia = "<<silnia<<endl;

	return 0;
}

