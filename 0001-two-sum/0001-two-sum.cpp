class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        //vector<int> res;
        map<int,int> mp;
        for(int i=0;i<a.size();i++){
            if(mp.find(target-a[i]) != mp.end()){
                
                    return {i,mp[target-a[i]]};
                
            }
            mp[a[i]] = i;
        }
        return {};
    }
};