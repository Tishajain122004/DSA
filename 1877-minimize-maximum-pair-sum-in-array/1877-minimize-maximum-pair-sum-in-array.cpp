class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int l = 0, r = nums.size()-1; 
        int max_sum = INT_MIN; 
        int sum = 0; 
        sort(nums.begin(), nums.end());

        while(l < r){
            sum = nums[l] + nums[r];
            max_sum = max(max_sum, sum);
            l++, r--;
        }
        return max_sum;
    }
};