class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        map<int,vector<int>> mp;
        for(int i=0;i<routes.size();i++){
            for(auto j: routes[i]){
                mp[j].push_back(i);
            }
        }
        set<int> visited_stop,visited_bus;
        
        queue<pair<int,int>> q;
        q.push({source,0});
        while(!q.empty()){
            auto k = q.front();
            q.pop();
            if(k.first == target){
                return k.second;
            }
            
            for(auto bus: mp[k.first]){
                if(visited_bus.find(bus) == visited_bus.end()){
                    visited_bus.insert(bus);
                    for(auto stop: routes[bus]){
                        if(visited_stop.find(stop) == visited_stop.end()){
                            visited_stop.insert(stop);
                            q.push({stop,k.second+1});
                        }
                    }
                }
            }
            
        }
        return -1;
    }
};