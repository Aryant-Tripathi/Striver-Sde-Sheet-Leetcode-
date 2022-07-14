class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        
        int low = 0, high = n - 1;
        int i = 0;
        
        while(i <= high)
        {
            if(arr[i] == 0)
            {
                swap(arr[i], arr[low]);
                low++;
                i++;
            }
            else if(arr[i] == 1)
            {
                i++;
            }
            else if(arr[i] == 2)
            {
                swap(arr[i], arr[high]);
                high--;
            }
        }
    }
};