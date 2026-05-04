class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n=nums.size(), ans = 0;

        //brute force 
        // for(int i=0; i<n; i++){
        //     for(int j=i; j<n; j++){
        //         if(abs(nums[i] - nums[j]) <= min(nums[i], nums[j])){
        //             ans = max(ans, nums[i] ^ nums[j]);
        //         }
        //     }
        // }
        // return ans;

        sort(nums.begin(), nums.end());
        int i=0;
        while(i<n){
            int j=i;
            while(j<n && nums[j] - nums[i] <= nums[i]){
                ans = max(ans, nums[i] ^ nums[j]);
                j++;
            }
            i++;
        } 
        return ans; 
        
    }
};