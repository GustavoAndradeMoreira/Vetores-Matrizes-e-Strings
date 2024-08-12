#include <iostream>
#include <cstdlib>

using namespace std;

void lerMatriz(int matriz[20][25], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matriz[i][j];
        }
    }
}

void imprimirMatriz(int matriz[20][25], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
}

void transporMatriz(int matriz[20][25], int transposta[25][20], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

void multiplicarMatriz(int matriz[20][25], int resultado[20][25], int m, int n, int k) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            resultado[i][j] = matriz[i][j] * k;
        }
    }
}

void adicionarMatriz(int matriz1[20][25], int matriz2[20][25], int resultado[20][25], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int m, n, k;
    int matriz[20][25], transposta[25][20], resultado[20][25], matriz2[20][25];

    cout << "Digite o numero de linhas (M <= 20): ";
    cin >> m;
    cout << "Digite o numero de colunas (N <= 25): ";
    cin >> n;

    cout << "Digite os elementos da matriz: ";
    lerMatriz(matriz, m, n);

    transporMatriz(matriz, transposta, m, n);
    cout << "Matriz transposta:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << transposta[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Digite o fator K para multiplicar a matriz: ";
    cin >> k;
    multiplicarMatriz(matriz, resultado, m, n, k);
    cout << "Matriz multiplicada por " << k << ":\n";
    imprimirMatriz(resultado, m, n);

    cout << "Digite os elementos da segunda matriz:\n";
    lerMatriz(matriz2, m, n);

    adicionarMatriz(matriz, matriz2, resultado, m, n);
    cout << "Resultado da adicao das duas matrizes:\n";
    imprimirMatriz(resultado, m, n);

    cout << "\n";

    return 0;
}
