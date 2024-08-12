#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
    float notas[5];
    float media = 0;
    float desvio[5];
    float desvioQuadrado[5];
    float variancia = 0;
    float desvioPadrao = 0;

    cout << "Digite as notas de 5 alunos: ";
    for (int i = 0; i < 5; ++i) {
        cin >> notas[i];
        media += notas[i];
    }

    media /= 5;

    for (int i = 0; i < 5; ++i) {
        desvio[i] = notas[i] - media;
        desvioQuadrado[i] = desvio[i] * desvio[i];
        variancia += desvioQuadrado[i];
    }

    variancia /= 5;
    desvioPadrao = sqrt(variancia);

    cout << "\nMedia: " << media;
    cout << "\nDesvios em relacao a media:";
    for (int i = 0; i < 5; ++i) {
        cout << "\nAluno " << i + 1 << ": " << desvio[i];
    }
    cout << "\nDesvios ao quadrado:";
    for (int i = 0; i < 5; ++i) {
        cout << "\nAluno " << i + 1 << ": " << desvioQuadrado[i];
    }
    cout << "\nVariancia: " << variancia;
    cout << "\nDesvio padrao: " << desvioPadrao;
    cout << "\n\n";

    return 0;
}
