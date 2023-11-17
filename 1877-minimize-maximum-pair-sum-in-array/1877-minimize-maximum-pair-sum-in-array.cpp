class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left = 0,right = nums.size()-1;
        int maxi = INT_MIN;
        while(left<right){  
            maxi = max(maxi,nums[left]+nums[right]);
            left++;
            right--;
        }
        return maxi;
    }
};