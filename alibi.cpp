#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
void main()
{
	int quantos, crime1, crime2, alibi1, alibi2;
	string alibi[100];
	cin >> quantos;
	cout << "\n";
	for (int i = 0; i < quantos; i++)
	{
		cin >> crime1;
		cin >> crime2;
		cout << "\n";
		cin >> alibi1;
		cin >> alibi2;
		cout << "\n";
		if ((alibi1 <= crime1) && (alibi2 >= crime2))
		{
			alibi[i] = "Com alibi";
		}
		else
		{
			alibi[i] = "Sem alibi";
		}
	}
	for (int i = 0; i < quantos; i++)
	{
		cout << alibi[i] << "\n";
	}
}