class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> mp;
        for(auto i:s){
            mp[i]++;
        }
        int ans = 0;
        for(auto i:t){
            if(mp.find(i)!=mp.end()){
                if(mp[i]>0){
                    mp[i]--;
                }
                else{
                    ans++;
                }
            }
            else{
                ans++;
            }
        }
        
        for(auto i = mp.begin();i!=mp.end();i++){
            ans+=i->second;
        }
        return ans/2;
    }
};