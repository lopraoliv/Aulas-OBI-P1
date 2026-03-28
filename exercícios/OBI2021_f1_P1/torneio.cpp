#include <bits/stdc++.h>

using namespace std;

int main(void){
    char c[6];
    int w=0;
    for(int i=0; i<6; i++){
        cin >> c[i];
        if(c[i] == 'V'){
            w++;
        }
    }
    switch(w){
        case 6:
            cout << "1\n";
            break;
        case 5:
            cout << "1\n";
            break;
        case 4:
            cout << "2\n";
            break;
        case 3:
            cout << "2\n";
            break;
        case 2:
            cout << "3\n";
            break;
        case 1:
            cout << "3\n";
            break;
        default:
            cout << "-1\n";
    }
    return 0;
}