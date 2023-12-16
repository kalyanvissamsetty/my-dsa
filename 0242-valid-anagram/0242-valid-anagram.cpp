class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        for(auto i:s){
            mp[i]+=1;
        }
        for(auto i:t){
            mp[i]-=1;
        }
        for(auto i:mp){
            if(i.second!=0){
                return false;
            }
        }
        return true;
    }
};