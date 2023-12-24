class Solution {
public:
    int minOperations(string s) {
        int case01 = 0;
        int case10 = 0;
        for(int i=0;i<s.length();i++){
            //case1
            if(i%2 == 0){
                if(s[i] == '1'){
                    case01++;
                }
            }
            else{
                if(s[i] == '0'){
                    case01++;
                }
            }
            //case2
            if(i%2 == 0){
                if(s[i] == '0'){
                    case10++;
                }
            }
            else{
                if(s[i] == '1'){
                    case10++;
                }
            }
        }
        return min(case01,case10);
    }
};