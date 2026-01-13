class Solution {
public:
    int trap(vector<int>& ht) {
        int n =  ht.size();
        vector<int> leftMax(n);
        vector<int> rightMax(n);

        //finding leftmax
        for(int i=0; i<n; i++){
            if(i==0){
                leftMax[i] = ht[0];
            }
            else{
                leftMax[i] = max(leftMax[i-1],ht[i]);
            }
            
        } 

        //finding rightmax
        for(int i=n-1; i>=0; i--){
            if(i == n - 1){
                rightMax[n - 1] = ht[n - 1];
            }
            else{
                rightMax[i] = max(rightMax[i+1], ht[i]);
            }
        }

        int maxWater = 0;  
        for(int i=0; i<n; i++){
            
            maxWater += min(leftMax[i], rightMax[i]) - ht[i];  
        }
        return maxWater; 
    }
};