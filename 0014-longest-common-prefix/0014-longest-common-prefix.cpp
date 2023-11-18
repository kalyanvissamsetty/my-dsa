class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        for(int i=1;i<strs.size();i++){
            while(strs[i].find(s) !=0){
                s = s.substr(0,s.length()-1);
            }
        }
        return s;
    }
};