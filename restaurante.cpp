#include <iostream>
using namespace std;
int funcoes(float despesa, float pessoas)
{
	float resultado;
	resultado = despesa / pessoas;
	return resultado;
}
void main()
{
	float despesa, pessoas;
	cin >> despesa >> pessoas;
	cout << funcoes(despesa, pessoas);
}
