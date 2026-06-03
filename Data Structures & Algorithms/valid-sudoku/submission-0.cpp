class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int ,unordered_set<char>> row, col ,subbox;
        for(int i = 0 ; i <9 ; i++)
        {
            for(int j= 0 ; j< 9;j++)
            {
                char val = board[i][j] ;
                if(val =='.' || val ==',')continue;
                int boxKey =(i/3)*3 +j /3 ;
                if(row[i].contains(val) || col[j].contains(val) || subbox[boxKey].contains(val))
                return false;
                row[i].insert(val) ;
                col[j].insert(val) ;
                subbox[boxKey].insert(val) ;
            }
        }
        return true;


        
    }
};
