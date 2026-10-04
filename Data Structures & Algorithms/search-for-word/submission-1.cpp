class Solution {
public:
    bool wordsearch(int row,int col,vector<vector<bool>>& visited,string& word,int ind,vector<vector<char>>& board)
    {
        if (ind==word.size())
        {
            return true;
        }

        if (row+1<board.size() &&  !visited[row+1][col] && board[row+1][col]==word[ind])
        {
            visited[row+1][col]=true;
            if (wordsearch(row+1,col,visited,word,ind+1,board))
            {
                return true;
            }
            visited[row+1][col]=false;
        }

        if (row-1>=0 &&  !visited[row-1][col] && board[row-1][col]==word[ind])
        {
            visited[row-1][col]=true;
            if (wordsearch(row-1,col,visited,word,ind+1,board))
            {
                return true;
            }
            visited[row-1][col]=false;
        }

        if (col+1<board[row].size() &&  !visited[row][col+1] && board[row][col+1]==word[ind])
        {
            visited[row][col+1]=true;
            if (wordsearch(row,col+1,visited,word,ind+1,board))
            {
                return true;
            }
            visited[row][col+1]=false;
        }

        if (col-1>=0 &&  !visited[row][col-1] && board[row][col-1]==word[ind])
        {
            visited[row][col-1]=true;
            if (wordsearch(row,col-1,visited,word,ind+1,board))
            {
                return true;
            }
            visited[row][col-1]=false;
        }

        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int row=0;
        int col=0;
        vector<vector<bool>> visited(board.size(),vector<bool>(board[0].size(), false));

        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board[i].size(); j++)
            {
                if(board[i][j] == word[0])
                {
                    visited[i][j]=true;
                    if(wordsearch(i,j,visited,word,1,board))
                    {
                        return true;
                    }
                    visited[i][j]=false;
                }
            }
        }
        return false;
    }
};