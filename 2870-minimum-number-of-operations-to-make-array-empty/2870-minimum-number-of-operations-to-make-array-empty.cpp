class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        int result = 0;
        for(auto i:mp){
            int second = i.second;
            if(second == 1){
                return -1;
            }
            if(second % 3 == 1){
                result += (second/3) - 1;
                result += 2;
            }else{
                result += (second/3);
                result += ((second%3)/2);
            }
        }
        return result;
    }
};