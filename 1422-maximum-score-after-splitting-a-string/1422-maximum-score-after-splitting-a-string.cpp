class Solution {
public:
    int maxScore(string s) {
        int totalones = 0, totalzeroes= 0;
        for(auto i:s){
            if(i=='0'){
                totalzeroes++;
            }
            else{
                totalones++;
            }
        }
        
        int leftzeroes = 0, rightones = totalones;
        int maxi = INT_MIN;
        int i=0;
        if(totalzeroes == s.length() || totalones == s.length()){
            return s.length()-1;
        }
        while(i<s.length()-1){
            if(s[i] == '0'){
                leftzeroes++; //1
            }
            else{
                rightones--;
            }
            cout << leftzeroes << " " << rightones << endl;
            maxi = max(leftzeroes+rightones,maxi);
            i++;
        }
        return maxi;
        
        // 0 100   1+1
        // 01 00   1+0
        // 010 0   
    }
};