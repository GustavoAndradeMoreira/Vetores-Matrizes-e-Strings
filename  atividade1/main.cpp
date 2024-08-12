#include <iostream>

using namespace std;

int main() {
    int vetor[5];
    int somaImpares = 0;

    cout << "Digite 5 elementos para o vetor: ";
    for (int i = 0; i < 5; i++) {
        cin >> vetor[i];
        if (vetor[i] % 2 != 0) {
            somaImpares += vetor[i];
        }
    }

    cout << "\nA soma de todos os elementos impares e: " << somaImpares << "\n";
    return 0;
}
