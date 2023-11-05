class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s == goal){
            return true;
        }
        if(s.length() != goal.length()){
            return false;
        }
        for(int j=0;j<s.length();j++){
            char first = s[0];
            for(int i=0;i<s.length()-1;i++){
                s[i] = s[i+1];
            }
            s[s.size()-1]=first;
            if(s == goal){
                return true;
            }
        }
        return false;
    }
};