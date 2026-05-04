class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n=nums.size(), ans = 0;

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(abs(nums[i] - nums[j]) <= min(nums[i], nums[j])){
                    ans = max(ans, nums[i] ^ nums[j]);
                }
            }
        }
        return ans;
        // int i=0, j=i+1, k=2, ans = 0; 
        // while(i<n && j<n){
        //     if(j-i+1 == k){
        //         if(abs(nums[i] - nums[j]) <= min(nums[i], nums[j])){
        //             ans = max(ans, nums[i] ^ nums[j]);
        //         }
        //     }
        //     i++, j++;
        // }
        // return ans; 
    }
};