class Solution {
public:
    void dfs(vector<int> &res, unordered_map<int,vector<int>> &mp,set<int> &s,int h){
        if(s.find(h)!=s.end()){
            return;
        }
        res.push_back(h);
        s.insert(h);
        for(auto i:mp[h]){
            dfs(res,mp,s,i);
        }
    }
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int,vector<int>> mp;
        for(auto i:adjacentPairs){
            mp[i[0]].push_back(i[1]);
            mp[i[1]].push_back(i[0]);
        }
        int start;
        for(auto i: mp){
            if(i.second.size() == 1){
                start = i.first;
                break;
            }
            
        }
        vector<int> res;
        set<int> s;
        dfs(res,mp,s,start);
        return res;
    }
    
    
};