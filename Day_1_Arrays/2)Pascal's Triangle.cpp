class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 1) return {{1}};
        if(numRows == 2) return {{1}, {1, 1}};
        
        vector<vector<int>> ans;
        
        ans.push_back({1});
        ans.push_back({1, 1});
        
        int prev = 1;
        
        for(int r = 2; r < numRows; r++)
        {
            vector<int> temp;
            
            temp.push_back(1);
            for(int i = 1; i < ans[prev].size(); i++)
            {
                temp.push_back(ans[prev][i - 1] + ans[prev][i]);
            }
            temp.push_back(1);
            
            ans.push_back(temp);
            prev++;
        }
        
        return ans;
    }
};