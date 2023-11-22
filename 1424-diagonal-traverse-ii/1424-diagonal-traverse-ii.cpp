class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        unordered_map<int,vector<int>> mp;
        int n = 0;
        for(int i=nums.size()-1;i>=0;i--){
            for(int j=nums[i].size()-1;j>=0;j--){
                n = max(n,i+j);
                mp[i+j].push_back(nums[i][j]);
            }
        }
        vector<int> vec;
        for(int i=0;i<=n;i++){
            for(auto ii: mp[i]){
                vec.push_back(ii);
            }
        }
        return vec;
    }
};