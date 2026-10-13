class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int r =0;r <9;r++)
        {
            unordered_set<char> seen;
            for(int i = 0; i < 9; i++)
            {
                if(board[r][i] =='.')
                    continue;
                if(seen.count(board[r][i]))
                    return false;
                seen.insert(board[r][i]);
            }
        }

        for(int c = 0 ; c <9; c++)
        {
            unordered_set<char> seen;
            for(int i =0; i < 9;i++)
            {
                if(board[i][c] == '.')
                    continue;
                if(seen.count(board[i][c]))
                    return false;
                seen.insert(board[i][c]);
            }
        }

        for(int s = 0; s <9;s++)
        {
            unordered_set<char> seen;
            for(int i =0;i<3;i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    int r = (s/3) * 3 + i;
                    int c = (s%3) * 3 + j;
                    if(board[r][c] == '.')
                        continue;
                    
                    if(seen.count(board[r][c]))
                        return false;
                    seen.insert(board[r][c]);
                }
            }
        }
        return true;
    }
};
