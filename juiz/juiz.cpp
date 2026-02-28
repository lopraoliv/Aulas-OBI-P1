#include <iostream>

using namespace std;

int main(void){
    int nota, idade;

    cout << "Qual a sua idade? ";
    cin >> idade;

    cout << "Qual a nota da sua prova? ";
    cin >> nota;

    if(!(idade<=18)){
        cout << "Você é da modalidade Sênior\n";
        return 0;
    }
    if(nota>100 || nota<0 || idade < 0){
        cout << "Nota ou idade incoreta\n";
        return 0;
    }
    if(nota >= 80){
        cout << "Você revebeu uma medalha na OBI\n";
    } else{
        cout << "Infelizmente, você não recebeu uma medalha na OBI. Tente novamente próximo ano\n";
    }

    return 0;
}