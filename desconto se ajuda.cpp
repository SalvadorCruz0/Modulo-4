#include <iostream>
using namespace std;
void main()
{
	int a;
	float produto = 7.5,preco=7.5,ye;
	cout << "quantos queres encomendar?";
	cin >> a; ye = a * produto;
	//desconto 
	if (a < 100)
	{
		produto = produto;
		cout << "desconto de 0%" << " preco e " << ye;

	}

	else if (a >= 1000)
	{
		ye= ye-produto*0.1;
		cout << "desconto de 10% " << " pagaste  " <<ye;
	}
	else if (a >= 100)
	{
		ye=ye-produto*0.05;
		cout << "desconto de 5%" << ", pagaste " << ye;
	}
}