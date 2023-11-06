#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> d;
        for(int i=0;i<2*n;i++){
            int x;
            cin >> x;
            d.push_back(x);
        }
        n = 2*n;
        sort(d.begin(),d.end());
        int l = (n/2)-1;
        int r = (n/2);
        cout << abs(d[l]-d[r]) << endl;
    }
}
