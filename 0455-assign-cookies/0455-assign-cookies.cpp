class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int child = g.size();
        int cookies = s.size();
        int ans = 0;
        int i=0,j=0;
        while(i<child && j<cookies){
            if(s[j]>=g[i]){
                ans++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};