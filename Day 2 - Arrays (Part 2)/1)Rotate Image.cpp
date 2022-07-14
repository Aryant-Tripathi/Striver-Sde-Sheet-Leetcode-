class Solution {
public:
    /*
    1 2 3   transpose le lo   1 4 7   reverse every row   7 4 1
    4 5 6   --------------->  2 5 8   ----------------->  8 5 2
    7 8 9                     3 6 9                       9 6 3
    
    */
    void rotate(vector<vector<int>>& arr) {
        int n = arr.size();
        
        // making transpose
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
        
        // reverse every row
        for(int i = 0; i < n; i++)
        {
            reverse(arr[i].begin(), arr[i].end());
        }
        
        return;
    }
};