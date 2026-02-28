#include <iostream>

using namespace std;

int main(void){
    int n, pot, res=1, k=1;

    cout << "Me diga um número: ";
    cin >> n;

    cout << "Me diga uma potência: ";
    cin >> pot;

    while(k<=pot){
        res = res*n;
        k++;
    }
    cout << "Resultado: " << res << "\n";
    return 0;
}