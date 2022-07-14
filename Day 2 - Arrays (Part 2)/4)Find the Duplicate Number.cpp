class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int n = arr.size();
        
        int ans = -1;
        for(int i = 0; i < n; i++)
        {
            int value = abs(arr[i]);
            if(arr[value] < 0)
            {
                ans = value;
                break;
            }
            else
            {
                arr[value] *= -1;
            }
        }
        
        return ans;
    }
};