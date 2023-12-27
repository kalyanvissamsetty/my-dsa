class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int res = 0;
        int left = 0;
        for(int r = 1;r<colors.length();r++){
            if(colors[r] == colors[left]){
                if(neededTime[r]<neededTime[left]){
                    res+=neededTime[r];
                }
                else{
                    
                    res+=neededTime[left];
                    left = r;
                }
            }
            else{
                left = r;
            }
        }
        return res;
    }
};