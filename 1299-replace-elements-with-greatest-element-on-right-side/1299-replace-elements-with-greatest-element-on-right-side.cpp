class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size()-1;
        int maxi = -1;
        while(n>=0){
            int g = arr[n];
            arr[n] = maxi;
            maxi = max(g,maxi);
            n--;
        }
        return arr;
    }
};