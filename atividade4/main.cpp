#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Digite o numero de elementos (ate 10): ";
    cin >> n;
    int vetor[10];

    cout << "Digite " << n << " elementos: ";
    for (int i = 0; i < n; ++i) {
        cin >> vetor[i];
    }

    sort(vetor, vetor + n, greater<int>());
    cout << "\nOs 2 maiores elementos sao: " << vetor[0] << " e " << vetor[1];

    int somaParesPosImpares = 0;
    for (int i = 1; i < n; i += 2) {
        if (vetor[i] % 2 == 0) {
            somaParesPosImpares += vetor[i];
        }
    }

    cout << "\nA soma dos elementos pares em posicoes impares e: " << somaParesPosImpares;
    cout << "\n\n";

    return 0;
}
