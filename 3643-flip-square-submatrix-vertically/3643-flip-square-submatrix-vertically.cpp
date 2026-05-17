class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int st = x; 
        int end = min(st + k - 1, (int)grid.size() - 1); 

        while(st<end){
            for(int c=y; c<=y+k-1; c++){
                swap(grid[st][c], grid[end][c]); 
            }
            
            st++,  end--; 
        }

        return grid; 
    }
};