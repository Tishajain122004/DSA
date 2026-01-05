class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        int countOdd = 0;
        long long maxSum = 0; 
        int minVal = INT_MAX; 

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                
                minVal = min(minVal, abs(matrix[i][j])); 
                maxSum += abs(matrix[i][j]); 
                if(matrix[i][j] < 0){
                    countOdd += 1; 
                    
                }
                
            }
        }
        if(countOdd % 2 == 0){
            return maxSum; 
        }
        else{
            return maxSum - (2 * minVal);
        }

    }
};