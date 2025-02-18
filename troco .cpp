#include <iostream>	
#include <string>
using namespace std;
int i,j;

void main()
{
	float priceeuro, pricecents, valor = 0, preco, change;
	float money[8] = { 2,1,0.5,0.2,01,0.05,0.02,0.01 };

	int payment[8], changeincoins[8] = { 0,0,0,0,0,0,0,0 };
	cin >> priceeuro;
	cin >> pricecents;
	cout << "\n";
	preco = priceeuro + (pricecents / 100);
	for (j = 0; j < 8; j++)
	{
		cin >> payment[j];
	}
	for (i = 0; i < 8; i++)
	{
		valor = valor + (money[i] * payment[i]);

	}
	change = valor - preco;
	cout << change;
	if (valor = preco)
	{
		cout << "Thank´s for the payment";
	}
	else if (change < 0)
	{
		cout << "u need to pay more ";
	}
	else
	{
		for (i = 0; i < 8; i++)
		{
			int Coinss = change / money[i];
			if (Coinss > 0)
			{
				cout << Coinss << " coins of " << money[i];
				change -= change - (Coinss * money[i]);
			}
	}
}