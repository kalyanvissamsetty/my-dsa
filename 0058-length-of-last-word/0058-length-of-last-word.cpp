class Solution {
public:
    int lengthOfLastWord(string s) {
        bool isEncounteredLetters = false;
        int g = 0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' '){
                if(isEncounteredLetters){
                    return g;
                }
            }
            else{
                isEncounteredLetters = true;
                g++;
            }
        }
        return g;
    }
};