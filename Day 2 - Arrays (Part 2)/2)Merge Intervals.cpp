class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        
        vector<vector<int>> ans;
        ans.push_back(arr[0]);
        
        for(int i = 1; i < n; i++)
        {
            int size = ans.size();
            if(ans[size - 1][1] >= arr[i][0])
            {
                ans[size - 1][1] = max(arr[i][1], ans[size - 1][1]);
            }
            else
            {
                ans.push_back(arr[i]);
            }
        }
        
        return ans;
    }
};