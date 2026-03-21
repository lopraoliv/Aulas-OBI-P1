#include <bits/stdc++.h>

using namespace std;

int main(void){
    vector<int> vec;

    cout << "Escreva números naturais.\n";

    int value;

    do{
        cin >> value;
        vec.push_back(value);
    }while(vec.back() > 0);

    vec.pop_back();

    for(int i=0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
        

    cout << vec.size() << "\n";
}