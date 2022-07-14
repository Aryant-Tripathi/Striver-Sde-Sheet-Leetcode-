class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        
        int maxProfit = 0, tillMinimum = INT_MAX;
        
        for(int i = 0; i < n; i++)
        {
            tillMinimum = min(tillMinimum, arr[i]);
            
            maxProfit = max(maxProfit, (arr[i] - tillMinimum));
        }
        
        return maxProfit;
    }
};