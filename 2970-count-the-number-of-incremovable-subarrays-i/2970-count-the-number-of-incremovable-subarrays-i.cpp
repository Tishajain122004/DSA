class Solution {
public:
    bool isConsiderableSubset(vector<int> nums, int k, int l){
        nums.erase(nums.begin()+k, nums.begin()+l+1); 
        int n = nums.size(); 
        if(n<=1){
            return true;
        }
        for(int i=0; i<n-1; i++){
            if(nums[i] >= nums[i+1]){
                return false; 
            }
        }
        return true; 
    }
    int finaSubsets(vector<int>& nums, int i, int j){
        int n = nums.size();
        int count = 0; 
        for(int k = i; k<n; k++){
            for(int l = k; l<n; l++){
                if(isConsiderableSubset(nums, k, l)){
                    count++;
                }
            }
        }
        return count;
    }
    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size(); 

        // for(int i=0; i<n-1; i++){
        //     if(nums[i] > nums[i+1]){
        //         return finaSubsets(nums, i, i+1); 
        //     }  
        // }
        return finaSubsets(nums, 0, 0); 
    }
};