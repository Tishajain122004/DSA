class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int st = 0;
        int end = mat.size() - 1;

        while(st<=end){
            int mid = st + (end - st)/2;
            if(target<mat[mid][0]){
                end = mid - 1;
            }
            else if(target >mat[mid][mat[mid].size() - 1]){
                st = mid +1;
            }
            else{
                int st2 = 0;
                int end2 = mat[mid].size() - 1;
                while(st2 <= end2){
                    int mid2 = st2 + (end2 - st2)/2;
                    if(mat[mid][mid2] == target){
                        return true;
                    }
                    else if(mat[mid][mid2]> target){
                        end2 = mid2 - 1;
                    }
                    else{
                        st2 = mid2 + 1;
                    }
                }
                return false;
            }
        }
        return false;
    }
};