#include <iostream>
#include <string>
#include <cmath>
using namespace std;
double peso[2] = { 0 }, altura[2] = { 0 }, imc[2] = { 0 }, totalimc = 0;
void potencia()
{
    int a, b;
    cout << "Insere a base: ";
    cin >> a;
    cout << "Insere o expoente: ";
    cin >> b;
    int resultado = 1;
    for (int i = 0; i < b; i++)
    {
        resultado *= a;
    }
    cout << "O resultado e " << resultado << "\n";
}

void numero()
{
    int num, i, contador = 0;
    cout << "Diz-me o numero: ";
    cin >> num;

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            contador++;
        }
    }
    if (contador == 2)
    {
        cout << "O numero e primo\n";
    }
    else
    {
        cout << "O numero nao e primo\n";
    }

    if (num % 2 == 0)
    {
        cout << "O numero e par\n";
    }
    else
    {
        cout << "O numero e impar\n";
    }
}

void bissexto()
{
    int ano;
    cout << "Insere um ano: ";
    cin >> ano;
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    {
        cout << "O ano e bissexto\n";
    }
    else
    {
        cout << "O ano nao e bissexto\n";
    }
}

void aoquadrado()
{
    int a;
    cout << "Insere um numero: ";
    cin >> a;
    cout << "O numero ao quadrado e " << a * a << "\n";
}

void pesos()
{
   
    int escolha, aluno;
    cout << "1-Digitar altura e peso, 2-Calcular IMC de um aluno, 3-Calcular media de IMC\n";
    cin >> escolha;

    switch (escolha)
    {
    case 1:
        for (int i = 0; i < 2; i++)
        {
            cout << "Altura do aluno " << i + 1 << ": ";
            cin >> altura[i];

            cout << "Peso do aluno " << i + 1 << ": ";
            cin >> peso[i];

            imc[i] = peso[i] / (altura[i] * altura[i]);
        }
        break;

    case 2:
        cout << "Queres calcular o IMC de qual aluno? [1 a 2]\n";
        cin >> aluno;
        aluno -= 1;
        if (aluno >= 0 || aluno < 2)
        {
            cout << "O IMC do aluno " << aluno + 1 << " e " << imc[aluno] << "\n";
        }
        else
        {
            cout << "Era de 1 a 2\n";
        }
        break;

    case 3:
        totalimc = (imc[0] + imc[1]) / 2;
        cout << "A media de IMC e " << totalimc << "\n";
        break;
    }
}

void menu()
{
    int escolhas;
    do
    {
        cout << "---Menu---\n";
        cout << "1 - Ao Quadrado\n";
        cout << "2 - Bissexto\n";
        cout << "3 - Que numero\n";
        cout << "4 - Potencia\n";
        cout << "5 - Os pesos\n";
        cout << "0 - Sair\n";
        cin >> escolhas;

        switch (escolhas)
        {
        case 1:
            aoquadrado();
            break;
        case 2:
            bissexto();
            break;
        case 3:
            numero();
            break;
        case 4:
            potencia();
            break;
        case 5:
            pesos();
            break;
        }
    } while (escolhas != 0);
}

void main()
{
    menu();
}
