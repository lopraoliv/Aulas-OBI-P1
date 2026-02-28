#include <iostream>

using namespace std;

int main(void){
    double a, b, res;

    cout << "Escreva os números que você quer dividir: ";
    cin >> a >> b;

    res = a / b;

    cout << "A divisão dos números é " << res << "\n";

    return 0;
}