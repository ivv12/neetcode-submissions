class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=0;
        while (r<matrix.size())
        {
            if (matrix[r][0]>target)
            {
                break;
            }
            r++;
        }

        if (r>0)
        {
            r--;
        }
        
        int c=0;

        while (c<matrix[0].size())
        {
            if (matrix[r][c]==target)
            {
                return true;
            }
            c++;
        }

        return false;
    }
};
