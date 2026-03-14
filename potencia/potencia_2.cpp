#include <iostream>

using namespace std;

int main(void){
    long long int res=1;
    char letra = 'y';

    do{
        cout << "res = " << res << "\n";
        cout << "Quer multiplicar res por 2? Responda com y para sim. ";
        cin >> letra;
        res*=2;
    }while(letra == 'y' || letra == 'Y');
}