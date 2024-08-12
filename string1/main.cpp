#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome, menorNome;
    cout << "Digite os nomes (para parar, digite uma linha vazia):\n";
    while (true) {
        getline(cin, nome);
        if (nome.empty()) break;
        if (menorNome.empty() || nome < menorNome) {
            menorNome = nome;
        }
    }
    cout << "\nNome lexicograficamente menor: " << menorNome << "\n";

    return 0;
}
