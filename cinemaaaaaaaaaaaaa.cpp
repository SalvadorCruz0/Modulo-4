#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int vencedoresfilmes[4][4];
string nada;

int melhorfotografia(int lala)
{
	setlocale(LC_ALL, "Portuguese");
	string filmes[4] = { "Dexter","DexterNewBlood","SigmaMovie","SkibiOnSigma" };
	int i, maiorfotografia = 0;
	for (i = 0; i < 4; i++)
	{
		cout << "Qual é a classificação do filme " << filmes[i] << " na categoria --MELHOR FOTOGRAFIA-- --->";
		cin >> vencedoresfilmes[i][3];
	}
	for (i = 0; i < 4; i++)
	{
		if (vencedoresfilmes[i][3] > maiorfotografia)
		{
			maiorfotografia = vencedoresfilmes[i][3];
		}
	}
	for (i = 0; i < 4; i++)
	{
		if (vencedoresfilmes[i][3] == maiorfotografia)
		{
			cout << "o vencedor na categoria melhor ator e : " << filmes[i];
		}
	}
	
	
	return lala;
}
int melhorbanda(int lala)
{
	setlocale(LC_ALL, "Portuguese");
	string filmes[4] = { "Dexter","DexterNewBlood","SigmaMovie","SkibiOnSigma" };
	int i, maiorbanda = 0;
	for (i = 0; i < 4; i++)
	{
		cout << "Qual é a classificação do filme " << filmes[i] << " na categoria --MELHOR BANDA-- --->";
		cin >> vencedoresfilmes[i][2];
	}
	for (i = 0; i < 4; i++)
	{
		if (vencedoresfilmes[i][2] > maiorbanda)
		{
			maiorbanda = vencedoresfilmes[i][2];
		}
	}
	for (i = 0; i < 4; i++)
	{
		if (vencedoresfilmes[i][2] == maiorbanda)
		{
			cout << "\nO vencedor na categoria melhor banda é o filme: " << filmes[i];
		}
	}
	
	return lala;
}
int melhoratriz(int lala)
{
	setlocale(LC_ALL, "Portuguese");
	string filmes[4] = { "Dexter","DexterNewBlood","SigmaMovie","SkibiOnSigma" };
	int i, maioratriz = 0;
	for (i = 0; i < 4; i++)
	{
		cout << "Qual é a classificação do filme " << filmes[i] << " na categoria --melhro atriz";
		cin >> vencedoresfilmes[i][1];
	}
	for (i = 0; i < 4; i++)
	{
		if (vencedoresfilmes[i][1] > maioratriz)
		{
			maioratriz = vencedoresfilmes[i][0];
		}
	}
	for (i = 0; i < 4; i++)
	{
		if (vencedoresfilmes[i][1] == maioratriz)
		{
			cout << "\nO vencedor na categoria --MELHOR ATRIZ-- é o filme: " << filmes[i];
		}
	}
	
	
	return lala;
}
int melhorator(int lala)
{
	setlocale(LC_ALL, "Portuguese");
	string filmes[4] = { "Dexter","DexterNewBlood","SigmaMovie","SkibiOnSigma" };
	int i, maiorator = 0, erro = 0;
	for (i = 0; i < 4; i++)
	{
		do {
			erro = 0;
			cout << "Qual é a classificação do filme " << filmes[i] << " na categoria melhor ator";
			cin >> vencedoresfilmes[i][0];
			if (vencedoresfilmes[i][0] > 5 || vencedoresfilmes[i][0] < 1)
			{
				cout << "É de 1 a 5\n";
				erro = erro + 1;
			}
		} while (erro != 0);
	}

	for (i = 0; i < 4; i++)
	{
		if (vencedoresfilmes[i][0] > maiorator)
		{
			maiorator = vencedoresfilmes[i][0];
		}
	}
	for (i = 0; i < 4; i++)
	{
		if (vencedoresfilmes[i][0] == maiorator)
		{
			cout << "\nO vencedor na categoria melhor ator é o filme: " << filmes[i];
		}
	}
	
	return lala;
}
int menu(int lala)
{
	string filmes[4] = { "Star wars","Endgame","Carros","Interstellar" };
	int i, j, vencedor[4] = { 0,0,0,0 }, maior = 0;
	melhorator(lala);
	melhoratriz(lala);
	melhorfotografia(lala);
	melhorbanda(lala);
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			vencedor[i] = vencedor[i] + vencedoresfilmes[i][j];
		}
	}
	for (i = 0; i < 4; i++)
	{
		if (vencedor[i] > maior)
		{
			maior = vencedor[i];
		}
	}
	for (i = 0; i < 4; i++)
	{
		if (vencedor[i] == maior)
		{
			cout << "\nO melhor filme de todos é: " << filmes[i];
		}
	}
	return lala;
}
int main()
{
	int lala = 0;
	menu(lala);
}