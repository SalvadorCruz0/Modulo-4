#include <iostream>	
#include <string>
using namespace std;
void main ()
{
	int meses[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 },i,escolha;
	for(i=0;i<13;i++)
	{
		cin >> escolha;
		if(escolha<0||escolha>12)
		{
			cout << "E de 0 a 12"<<"\n";
		}
		else
		{
		cout <<"O mes de numero "<<escolha<<" tem dias- "<< meses[escolha];
		}
	}
}