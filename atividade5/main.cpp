#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int V1[10], V2[10];

    cout << "Digite 10 elementos para o vetor V1: ";
    for (int i = 0; i < 10; ++i) {
        cin >> V1[i];
    }

    for (int i = 0; i < 10; ++i) {
        if (i % 2 == 0) {
            V2[i] = V1[i] * 5;
        } else {
            V2[i] = V1[i] + 5;
        }
    }

    cout << "\nVetor V1: ";
    for (int i = 0; i < 10; ++i) {
        cout << V1[i] << " ";
    }

    cout << "\nVetor V2: ";
    for (int i = 0; i < 10; ++i) {
        cout << V2[i] << " ";
    }

    cout << "\n\n";

    return 0;
}
