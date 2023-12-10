class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i, j, temp;
        vector<vector<int>> ans;
        vector<int> arr;
        for(i=0 ; i<matrix[0].size() ; i++)
        {
            for(j=0 ; j<matrix.size() ; j++)
            {
               arr.push_back(matrix[j][i]);
            }
            ans.push_back(arr);
            arr.clear();
        }
        return ans;
    }
};