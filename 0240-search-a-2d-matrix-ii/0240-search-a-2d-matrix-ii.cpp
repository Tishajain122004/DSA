class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row = mat.size();
        // int col = mat[0].size();
        // for(int i=0; i<row; i++){
        //     for(int j=0; j<col; j++){
        //         if(mat[i][j] == target){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        int st = 0;
        int col = mat[0].size();
        for(int i=0; i<row; i++){
            int st = 0;
            int end = col - 1;
            while(st<=end){
                int mid = st + (end - st)/2;
                if(mat[i][mid] == target){
                    return true;
                }
                else if(target>mat[i][mid]){
                    st = mid +1;
                }
                else{
                    end = mid -1;
                }
            }
        }
        return false;
    }
};