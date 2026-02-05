class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 0);
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                result[i] = nums[i];
            }
            else{
                int steps = (i + nums[i]%n + n) % n; 
                result[i] = nums[steps];
            }
        }
        return result;
        
    }
};