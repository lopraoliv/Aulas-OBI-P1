#include <bits/stdc++.h>

using namespace std;

int main(void){
    string hello = "Hello, World!";
    int t = hello.length();
    hello.pop_back();
    hello.push_back('?');
    cout << t << " " + hello + "\n";
}