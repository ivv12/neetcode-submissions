class Solution {
public:
    void nqueens(int row,vector<vector<string>>& res,vector<string>& board,vector<bool>& viscol,vector<bool>& visdiag1, vector<bool>& visdiag2)
    {
        if (row==board.size())
        {
            res.push_back(board);
            return;
        }

        for (int col=0;col<board.size();col++)
        {
            if(!viscol[col] && !visdiag1[row-col+board.size()-1] && !visdiag2[row+col])
            {
                board[row][col]='Q';
                viscol[col]=visdiag1[row-col+board.size()-1]=visdiag2[row+col]=true;
                nqueens(row+1,res,board,viscol,visdiag1,visdiag2);
                viscol[col]=visdiag1[row-col+board.size()-1]=visdiag2[row+col]=false;
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        int row=0;
        vector<vector<string>> res;
        vector<string> board(n, string(n, '.'));
        vector<bool> viscol(n,false);
        vector<bool> visdiag1(2*n-1,false);
        vector<bool> visdiag2(2*n-1,false);
        nqueens(row,res,board,viscol,visdiag1,visdiag2);
        return res;
    }
};
