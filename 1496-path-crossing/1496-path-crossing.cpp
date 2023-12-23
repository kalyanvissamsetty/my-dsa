class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> s;
        int x=0,y=0;
        s.insert({x,y});
        for(auto i: path){
            if(i == 'N'){
                y++;
            }
            else if(i == 'E'){
                x++;
            }
            else if(i == 'S'){
                y--;
            }
            else{
                x--;
            }
            int prev = s.size();
            s.insert({x,y});
            if(prev == s.size()){
                return true;
            }
        }
        return false;
    }
};