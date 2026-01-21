class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        for(int i=0; i<n; i++){
            if(nums[i]%2 == 0){
                ans[i] = -1;
                continue;
            }
            // const int total_bits = sizeof(nums[i]) * 8;
            for(int j=0; j<32; ++j){
                 if(((nums[i] >> j) & 1) == 0){
                    ans[i] = nums[i] ^ (1 << (j - 1));
                    break;
                 }
            }
        
        }
        return ans;
    }
};