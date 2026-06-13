#include <bits/stdc++.h>

using namespace std;

int main(void){
    int A, B, C, D, m1;
    cin >> A >> B >> C >> D;

    if(A<=C){
        m1 = D + C + (B+1)/2;
    }else{
        m1 = D + C + (B+1)/2;
        if(B%2 == 0){
            m1 += (A-C+3)/4;
        }else{
            if((A-C) > 2){
                m1 += (A-C+1)/4;
            }
        }
    }
    cout << m1 << "\n";
    return 0;
}