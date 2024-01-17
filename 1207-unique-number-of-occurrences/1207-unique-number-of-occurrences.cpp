class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;

        for(auto val: arr)
        {
            freq[val]++;
        }

        unordered_set<int> st;

        for(auto val: freq)
        {
            if(st.count(val.second)) return false;
            st.insert(val.second);
        }

        return true;
    }
};