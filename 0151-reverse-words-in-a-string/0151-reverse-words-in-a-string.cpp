class Solution {
public:
    string reverseWords(string s) {
        
        string temp = "";
        string ans = "";
        for(int i=0;i<s.length();i++){
            char d = s[i];
            if(d != ' '){
                temp+=d;
            }
            else{
                if(ans!= ""){
                    if(temp!="")
                        ans = temp + " " + ans;
                }
                else{
                    if(temp!="")
                        ans = temp;
                }
                temp="";
            }
        }
        
        if(temp!=""){
            if(ans!=""){
                ans = temp+" "+ans;
            }
            else{
                ans =temp;
            }
        }
        return ans;
    }
};