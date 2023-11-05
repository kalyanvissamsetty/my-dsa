class Solution {
public:
    string removeOuterParentheses(string sa) {
        string res = "";
        stack<char> first;
        stack<char> second;
        int start = 0;
        int l = 0;
        for(int i=0;i<sa.length();i++){
            if(sa[i] == '('){
                first.push(sa[i]);
            }
            else{
                second.push(sa[i]);
            }
            if(first.size() == second.size()){
                
                res+=sa.substr(start+1,first.size()+second.size()-2-l);
                l = first.size()+second.size();
                start=i+1;
                
            }
        }
        return res;
    }
};