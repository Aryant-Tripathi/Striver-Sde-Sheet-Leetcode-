class Solution {
public:
    void merge(vector<int>& arr1, int n1, vector<int>& arr2, int n2) {
        
        int move = (n1 + n2) - 1;
        int i = n1 - 1, j = n2 - 1;
        
        while(i >= 0 && j >= 0)
        {
            if(arr1[i] >= arr2[j])
            {
                arr1[move] = arr1[i];
                i--;
                move--;
            }
            else
            {
                arr1[move] = arr2[j];
                j--;
                move--;
            }
        }
        
        while(i >= 0)
        {
            arr1[move--] = arr1[i--];
        }
        
        while(j >= 0)
        {
            arr1[move--] = arr2[j--];
        }
        
        return;
    }
};