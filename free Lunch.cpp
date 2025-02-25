#include <iostream>
#include <time.h>
#include <locale.h>
using namespace std;
int main()
{
	int apostas[20], numerodejogadores, maiores = 0, numeromaiores = 0, aleatorios = rand() % 98 + 1;
	srand(time(0));
	cout << "Quantos jogadores: ";
	cin >> numerodejogadores;
	cout << aleatorios;
	for (int i = 0; i < numerodejogadores; i++)
	{
		cout << "Qual e a melhor aposta do " << i + 1 << " jogador";
		cin >> apostas[i];
	}
	for (int i = 0; i < numerodejogadores; i++)
	{
		if (apostas[i] <= aleatorios)
		{
			if (apostas[i] > maiores)
			{
				maiores = apostas[i];
			}
		}
	}
	for (int i = 0; i < numerodejogadores; i++)
	{
		if (apostas[i] > aleatorios)
		{
			numeromaiores = numeromaiores + 1;
		}
		if ((apostas[i] < aleatorios) && (apostas[i] == maiores))
		{
			cout << "A aposta numero " << i + 1 << " ganhou ";
			break;
		}
		else if (apostas[i] == aleatorios)
		{
			cout << "A aposta nr " << i + 1 << " ganhou ";
			break;
		}
		else if (numeromaiores == numerodejogadores)
		{
			cout << "Ninguem ganhou";
		}
	}
}