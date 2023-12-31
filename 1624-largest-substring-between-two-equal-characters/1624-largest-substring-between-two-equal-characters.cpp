class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<char,int> mp;
        int maxi =  -2;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]] = i;
            }
            else{
                maxi = max(i-mp[s[i]]-1,maxi);
            }
        }
        return maxi==-2?-1:maxi;
        
    }
};