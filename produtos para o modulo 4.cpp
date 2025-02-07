#include <iostream>
#include <string>
using namespace std;

int gastos[5][12];
string produtos[5] = { "Batatas", "Cenouras", "Couves", "Alfaces", "Brocolos" };
string meses[12] = { "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro" };

void calcularTotalAno()
{
    int totalProduto[5] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            totalProduto[i] += gastos[i][j];
        }
        cout << "\nTotal de " << produtos[i] << ": " << totalProduto[i] << " no ano.";
    }
}

void calcularTotalMes()
{
    for (int j = 0; j < 12; j++)
    {
        int totalMes = 0;
        for (int i = 0; i < 5; i++)
        {
            totalMes += gastos[i][j];
        }
        cout << "\nNo mes de " << meses[j] << " comeste " << totalMes << " no total.";
    }
}

void inserirValores()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cout << "Quantos " << produtos[i] << " comeste em " << meses[j] << "? ";
            cin >> gastos[i][j];
        }
    }
}

int main()
{
    int escolha;
    inserirValores();
    do
    {
        cout << "\nO que queres fazer?\n";
        cout << "1 - Saber total de gastos por mes\n";
        cout << "2 - Saber total de gastos no ano\n";
        cout << "3 - Meter valores outra vez\n";
        cout << "0 - Sair\n";
        cout << "Escolhe: ";
        cin >> escolha;

        switch (escolha)
        {
        case 1:
            calcularTotalMes();
            break;
        case 2:
            calcularTotalAno();
            break;
        case 3:
            inserirValores();
            break;
        case 0:
            cout << "A bazar...";
            break;
        default:
            cout << "Opcao invalida. Tenta outra vez.";
        }
    } while (escolha != 0);

    return 0;
}
