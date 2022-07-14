class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        
        int maxSum = arr[0], currSum = 0;
        
        for(int i = 0; i < n; i++)
        {
            currSum += arr[i];
            
            maxSum = max(maxSum, currSum);
            
            if(currSum < 0) 
                currSum = 0;
        }
        
        return maxSum;
    }
};