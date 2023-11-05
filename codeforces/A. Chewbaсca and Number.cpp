#include <iostream>
#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int p = 0;
    long long int ans =0;
    while(n>0){
        long long int num = n%10;
        if((n>9 || n<9))
            ans+=min(9-num,num)* (long long int)(pow(10,p));
        else if(n == 9)
            ans+=9*(long long int)(pow(10,p));
        n = n/10;
        p++;
    }
    cout << ans;
}
