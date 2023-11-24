class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int ans = 0;
        int n = piles.size();
        int g = n/3;
        for(int i= n-2;i>=0;i-=2){
            ans+=piles[i];
            g--;
            if(g==0){
                break;
            }
        }
        return ans;
    }
};