#include <iostream>

using namespace std;

int main(void){
    int base, exp, res=1;

    cout << "Qual a base da potência? ";
    cin >> base;

    cout << "Qual o expoente da potência? ";
    cin >> exp;

    for(int i=0; i<exp; i++){
        res*=base;
    }
    cout << base << "elevado a " << exp << "é igual a " << res << "\n";
}