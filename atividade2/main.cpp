#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int quantidades[5];
    float valores[5];

    cout << "Digite a quantidade comprada de 5 produtos: ";
    for (int i = 0; i < 5; ++i) {
        cin >> quantidades[i];
    }

    cout << "Digite o valor unitario de cada produto: ";
    for (int i = 0; i < 5; ++i) {
        cin >> valores[i];
    }

    float valorTotalCompra = 0;
    for (int i = 0; i < 5; ++i) {
        float valorTotalProduto = quantidades[i] * valores[i];
        cout << "\nProduto " << i + 1 << ": Quantidade = " << quantidades[i] << ", Valor unitario = " << valores[i] << ", Valor total = " << valorTotalProduto;
        valorTotalCompra += valorTotalProduto;
    }

    cout << "\nValor total da compra: " << valorTotalCompra;
    cout << "\n\n";

    return 0;
}
