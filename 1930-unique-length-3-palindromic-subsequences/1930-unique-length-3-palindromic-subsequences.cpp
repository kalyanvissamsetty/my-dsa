class Solution {
public:
    int countPalindromicSubsequence(string s) {
        set<pair<char,char>> res;
        set<char> left;
        unordered_map<char,int> right;
        for(auto i:s){
            right[i]+=1;
        }
        
        for(int i=0;i<s.length();i++){
            right[s[i]]-=1;
            if(right[s[i]] == 0){
                right.erase(s[i]);
            }
            
            for (char ch = 'a'; ch <= 'z'; ++ch) {
                if(left.find(ch)!=left.end() && right.find(ch)!=right.end()){
                    res.insert({s[i],ch});
                }
            }
            left.insert(s[i]);
        }
        return res.size();
    }
};