class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ms = INT_MIN;
        int cs = 0;
        for(int val : nums){
            cs += val;
            ms = max(cs, ms);
            if(cs<0){
                cs = 0; 
            } 
        }
        return ms;
        
    }
};