class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int count = 0, n=nums.size();
        int i=0, j=0, max_len = 0;
        while(j<n){
            while(nums[j] > 1ll * nums[i]*k){
                i++;
            }
            max_len = max(max_len, j-i+1);
            j++;
        }
        return n-max_len ;   
    }
};