#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Digite a primeira string: ";
    getline(cin, str1);
    cout << "Digite a segunda string: ";
    getline(cin, str2);

    cout << "\nPrimeira string: " << str1;
    cout << "\nSegunda string: " << str2;

    if (str1.length() > 1) {
        cout << "\nSegunda letra da primeira string: " << str1[1];
    } else {
        cout << "\nA primeira string nao tem uma segunda letra.";
    }

    if (str2.length() > 1) {
        cout << "\nPenultima letra da segunda string: " << str2[str2.length() - 2];
    } else {
        cout << "\nA segunda string nao tem uma penultima letra.";
    }

    cout << "\n";

    return 0;
}
