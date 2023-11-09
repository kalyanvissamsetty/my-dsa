class Solution {
public:
    int mod = 1e9+7;
    int countHomogenous(string s) {
        
        int ans = 0;
        int res = 0;
        for(int i =0;i<s.length();i++){
            if(i>0 && s[i-1]!=s[i]){
                ans = 1;
            }
            else{
                ans+=1;
            }
            res = (res+ans)%mod;
        }
        return res;
    }
};