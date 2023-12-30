class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int> mp;
        int n = words.size();
        for(auto s:words){
            for(auto i:s){
                mp[i]++;
            }
        }
        for(auto i:mp){
            if(i.second%n!=0){
                return false;
            }
        }
        return true;
    }
};