class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        
        queue<pair<int,int>> q;
        q.push({0,0});
        vector<int> ans;
        while(!q.empty()){
            auto [i,j] = q.front();
            q.pop();
            ans.push_back(nums[i][j]);
            if(j==0 && i+1 < nums.size()){
                q.push({i+1,j});
            }
            if(j+1<nums[i].size()){
                q.push({i,j+1});
            }
        }
        return ans;
        // unordered_map<int,vector<int>> mp;
        // int n = 0;
        // for(int i=nums.size()-1;i>=0;i--){
        //     for(int j=nums[i].size()-1;j>=0;j--){
        //         n = max(n,i+j);
        //         mp[i+j].push_back(nums[i][j]);
        //     }
        // }
        // vector<int> vec;
        // for(int i=0;i<=n;i++){
        //     for(auto ii: mp[i]){
        //         vec.push_back(ii);
        //     }
        // }
        // return vec;
    }
};