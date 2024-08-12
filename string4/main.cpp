#include <iostream>
#include <string>
using namespace std;

int main() {
    string cargo;
    double salario, novoSalario, diferenca;
    double percentual = 0.05;

    cout << "Digite o cargo do funcionario: ";
    getline(cin, cargo);
    cout << "Digite o salario do funcionario: ";
    cin >> salario;

    if (cargo == "Gerente") {
        percentual = 0.10;
    } else if (cargo == "Engenheiro") {
        percentual = 0.20;
    } else if (cargo == "Tecnico") {
        percentual = 0.30;
    }

    novoSalario = salario + (salario * percentual);
    diferenca = novoSalario - salario;

    cout << "\nSalario antigo: " << salario;
    cout << "\nNovo salario: " << novoSalario;
    cout << "\nDiferenca: " << diferenca << "\n";

    return 0;
}
