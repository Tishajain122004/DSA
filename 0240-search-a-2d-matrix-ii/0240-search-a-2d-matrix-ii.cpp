class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {

        //brute force approach - 0(n**2)
        // int row = mat.size();
        // int col = mat[0].size();
        // for(int i=0; i<row; i++){
        //     for(int j=0; j<col; j++){
        //         if(mat[i][j] == target){
        //             return true;
        //         }
        //     }
        // }
        // return false;

        //more optimal - traversing all the rows and applied binary search for cols- 0(nlogm)
        // int st = 0;
        // int col = mat[0].size();
        // for(int i=0; i<row; i++){
        //     int st = 0;
        //     int end = col - 1;
        //     while(st<=end){
        //         int mid = st + (end - st)/2;
        //         if(mat[i][mid] == target){
        //             return true;
        //         }
        //         else if(target>mat[i][mid]){
        //             st = mid +1;
        //         }
        //         else{
        //             end = mid -1;
        //         }
        //     }
        // }
        // return false;


        //optimized solution - 
        int row = mat.size();
        int col = mat[0].size();
        int st = col - 1;
        int end = 0;

        while(end<row && st>=0){
            if(target == mat[end][st]){
                return true;
            }
            else if(target>mat[end][st]){
                end++;
            }
            else{
                st--;
            }
        }
        return false;


        // end = 0;
        // while(end<=st){
        //     if(target == mat[st][end]){
        //         return true;
        //     }
        //     else if(target>mat[st][end]){
        //         st--;
        //     }
        //     else{
        //         end++;
        //     }
        // }
    }
};