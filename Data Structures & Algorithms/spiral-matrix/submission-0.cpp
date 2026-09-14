class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int n=matrix.size();
        int up=0;
        int down=n-1;
        int right=matrix[0].size()-1;
        int left=0;

        while (up<=down && left<=right)
        {
            for (int i=left;i<=right;i++)
            {
                res.push_back(matrix[up][i]);
            }
    
            up++;

            for (int i=up;i<=down;i++)
            {
                res.push_back(matrix[i][right]);
            }
            right--;

            if (up <= down)
            {
                for (int i = right; i >= left; i--)
                {
                    res.push_back(matrix[down][i]);
                }
                down--;
            }

            if (left <= right)
            {
                for (int i = down; i >= up; i--)
                {
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        
    return res;

    }
};