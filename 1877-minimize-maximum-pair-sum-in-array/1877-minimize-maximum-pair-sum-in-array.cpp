class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int l = 0, r = nums.size()-1; 
        int max_sum = INT_MIN; 

        sort(nums.begin(), nums.end());

        while(l < r){
            max_sum = max(max_sum, nums[l] + nums[r]);
            l++, r--;
        }
        return max_sum;
    }
};