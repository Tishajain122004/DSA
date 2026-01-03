class Solution {
public:
    bool checkRightDiagonalSum(vector<vector<int>>& grid, int r, int c){
        int diagonalSum = 0;
        for(int i = 0; i < 3; i++) {
            // c + (2 - i) automatically peeche aayega
            diagonalSum += grid[r + i][c + (2 - i)];
        }
        if(diagonalSum == 15){
            return true;
        }
        return false;
    }
    bool checkLeftDiagonalSum(vector<vector<int>>& grid, int r, int c){
        
        int diagonalSum = 0;
        for(int i=0; i<3; i++){ 
            for(int j=0; j<3; j++){
                if(i == j ){
                    diagonalSum += grid[r + i][j + c];
                }
            }
        }
        if(diagonalSum == 15){
            return true; 
        }
        else{
            return false;
        } 
    }
    bool checkRowSum(vector<vector<int>>& grid, int r, int c){
        

        for(int i=0; i<3; i++){
            int rowSum = 0; 
            for(int j=0; j<3; j++){
                rowSum += grid[r + i][c + j];
            }
            if(rowSum != 15){
                return false; 
            }

        }
        return true; 

    }
    bool checkColSum(vector<vector<int>>& grid, int r, int c){

        for(int i=0; i<3; i++){
            int colSum = 0;
            for(int j=0; j<3; j++){
                colSum += grid[r + j][c + i]; 
            }
            if(colSum != 15){
                return false; 
            }
        }
        return true;

    }
    bool isDistinct(vector<vector<int>>& grid, int r, int c){
        vector<int> count(10, 0);
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                int val = grid[r+i][c+j];
                if(val < 1 || val > 9){
                    return false;
                }
                if(count[val] > 0){
                    return false; 
                }
                count[val]++;
            }
        }
        return true;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int count = 0;
        int row = grid.size(); 
        int col = grid[0].size(); 
        for(int i=0; i<row - 2; i++){
            for(int j=0; j<col - 2; j++){
                if(
                    checkColSum(grid, i, j) == true &&
                    checkRowSum(grid, i, j) == true &&
                    checkLeftDiagonalSum(grid, i, j) == true &&
                    checkRightDiagonalSum(grid, i, j) == true &&
                    isDistinct(grid, i, j) == true
                ){
                    count++; 
                }
            }
        }
        return count; 
    }
};