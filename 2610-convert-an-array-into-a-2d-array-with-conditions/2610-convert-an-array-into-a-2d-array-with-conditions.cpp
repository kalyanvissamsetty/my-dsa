class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> freq(nums.size()+1,0);
        for(auto i:nums){
            
            if(res.size()<=freq[i]){
                res.push_back({});
            }
            res[freq[i]].push_back(i);
            freq[i]++;
        }
        return res;
    }
};