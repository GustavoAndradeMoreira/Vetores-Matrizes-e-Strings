#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int count = 0;

    cout << "Digite uma string: ";
    getline(cin, str);

    for (char &c : str) {
        if (c == 'a') {
            c = 'b';
            count++;
        }
    }

    cout << "\nNumero de caracteres modificados: " << count;
    cout << "\nString modificada: " << str << "\n";

    return 0;
}
