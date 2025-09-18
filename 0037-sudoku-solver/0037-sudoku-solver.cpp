class Solution {
public:

    bool isSafe(vector<vector<char>>& board, int row, int col, char dig){
        //vertical
        for(int i=0; i<9; i++){
            if(board[i][col] == dig){
                return false; 
            }
        }
        //horizontal
        for(int j =0; j<9; j++){
            if(board[row][j] == dig){
                return false; 
            }
        }

        //grid
        int srow = (row/3)*3;
        int scol = (col/3)*3;

        for(int i = srow; i<=srow+2; i++){
            for(int j = scol; j<=scol+2; j++){
                if(board[i][j] == dig){
                    return false; 
                }
            }
        }

        return true; 
    }

    bool solve(vector<vector<char>>& board, int row, int col){

        if(row == 9){
            return true; 
        }

        int nrow = row, ncol = col +1;
        if(ncol == 9){
            ncol = 0;
            nrow = row + 1;
        }
        if(board[row][col] != '.'){
            return solve(board, nrow, ncol);
        }
        for(char dig = '1'; dig<='9'; dig++){
            if(isSafe(board, row, col, dig)){
                board[row][col] = dig;
                if(solve(board, nrow, ncol)){
                    return true;
                }
                board[row][col] = '.';
            }
        }
        return false; 
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0, 0);
        
    }
};