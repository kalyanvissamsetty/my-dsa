#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    while(n--){
        string s;
        cin >> s;
        if (s.find("++") != std::string::npos){
            x++;
        }
        else{
            x--;
        }
    }
    cout << x;
}
