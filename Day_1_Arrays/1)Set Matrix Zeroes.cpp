class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int row = arr.size();
        int col = arr[0].size();
        
        bool FirstRow = false, FirstCol = false;
        
        for(int i = 0; i < col; i++)
        {
            if(arr[0][i] == 0)
            {
                FirstRow = true;
                break;
            }
        }
        
        for(int j = 0; j < row; j++)
        {
            if(arr[j][0] == 0)
            {
                FirstCol = true;
                break;
            }
        }
        
        for(int i = 1; i < row; i++)
        {
            for(int j = 1; j < col; j++)
            {
                if(arr[i][j] == 0)
                {
                    arr[0][j] = 0;
                    arr[i][0] = 0;
                }
            }
        }
        
        for(int i = 0; i < col; i++)
        {
            if(arr[0][i] == 0 && i != 0)
            {
                for(int j = 0; j < row; j++)
                {
                    arr[j][i] = 0;
                }
            }
        }
        
        for(int j = 0; j < row; j++)
        {
            if(arr[j][0] == 0 && j != 0)
            {
                for(int i = 0; i < col; i++)
                {
                    arr[j][i] = 0;
                }
            }
        }
        
        if(FirstRow)
        {
            for(int i = 0; i < col; i++)
            {
                arr[0][i] = 0;
            }
        }
        
        if(FirstCol)
        {
            for(int i = 0; i < row; i++)
            {
                arr[i][0] = 0;
            }
        }
    }
};