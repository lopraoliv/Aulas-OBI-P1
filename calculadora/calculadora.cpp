#include <iostream>

using namespace std;

int main(void){
    double a, b;
    char c;
    cout << "Insira a conta que você quer calcular: ";
    cin >> a >> c >> b;
    if(c == '+'){
        cout << "O resultado é: " << a+b << "\n";
    } else if(c == '-'){
        cout << "O resultado é: " << a-b << "\n";
    } else if(c == '*'){
        cout << "O resultado é: " << a*b << "\n";
    } else if(c == '/'){
        cout << "O resultado é: " << a/b << "\n";
    } else{
        cout << "Erro: operação inválida\n";
    }
    return 0;
}