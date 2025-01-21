#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int Deposito(int saldo) {
    srand(time(0));
    int valor;
    cout << "Quanto queres depositar? ";
    cin >> valor;

    if (valor > 2000) {
        int aleator = rand() % 4;
        string frases[] = {
            "Muito dinheiro",
            "Roubaste a quem?",
            "Para de roubar a avo",
            "hmmmmmm"
        };
        cout << frases[aleator];
    }

    saldo = saldo+valor;
    return saldo;
}

int Debito(int saldo) {
    int valor;
    cout << "Quanto queres debitar? ";
    cin >> valor;

    if (valor > saldo) {
        cout << "Nao podes pobre!";
    }
    else {
        saldo =saldo- valor;
    }

    return saldo;
}

int VerificarSaldo(int saldo) {
    cout << "O teu saldo e " << saldo;
    return saldo;
}

int EnviarDinheiro(int saldo) {
    int valor;
    cout << "Quanto queres enviar? ";
    cin >> valor;

    if (valor > saldo) {
        cout << "Nao tens saldo suficiente!";
    }
    else {
        saldo -= valor;
        cout << "Dinheiro enviado com sucesso!";
    }

    return saldo;
}

int iniciarEcran() {
    int saldo = 1000;
    int escolhas;

    do {
        cout << "O que queres fazer?\n"
            << "1. Deposito\n"
            << "2. Debito\n"
            << "3. Verificar Saldo\n"
            << "4. Enviar Dinheiro\n"
            << "0. Sair\n"
            << "Escolha: ";
        cin >> escolhas;

        switch (escolhas) {
        case 1:
            saldo = Deposito(saldo);
            break;
        case 2:
            saldo = Debito(saldo);
            break;
        case 3:
            VerificarSaldo(saldo);
            break;
        case 4:
            saldo = EnviarDinheiro(saldo);
            break;
        case 0:
            break;
        default:
            cout << "Mete um numero que te disse";
        }

    } while (escolhas != 0);
    return saldo;
}

void main() 
{
    iniciarEcran();
}
