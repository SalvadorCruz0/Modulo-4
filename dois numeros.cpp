#include <iostream>
#include <string>
using namespace std;
int maior(int a[2])
{
	int b = 0, i;
	for (i = 0; i < 2; i++)
	{
		b = b + a[i];
	}
	return b;
}
int menos(int a[2])
{
	int b = 0, i;
	for (i = 0; i < 2; i++)
	{
		b = b - a[i];
	}
	return b;
}
int divisar(int a[2])
{
	int b = 0, i;
	for (i = 0; i < 2; i++)
	{
		b = b / a[i];
	}
	return b;
}
void main ()
{
	int ola,i,N[2],soma,subtrair,dividir;
	do{
		cout << "Diz me dois numeros";
		for (i = 0; i < 2; i++)
		{
			cin >> N[i];
		}
	soma = maior(N);
	subtrair = menos(N);
	dividir = divisar(N);
	cout << "Queres fazer oque?1somar,2 subtrair,3dividir,0sair";
	cin >> ola;
	switch (ola)
	{
	case 1:
		cout << "A soma e " << soma;
		break;
	case 2:
		cout << "A subtracao e " << subtrair;
		break;
	case 3:
		cout << "A divisao e " << dividir;
		break;
	}
	} while (ola != 0);
}