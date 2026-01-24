class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1; 
        int max_sum = INT_MIN; 
        int sum = 0; 
        sort(nums.begin(), nums.end());

        while(left < right){
            sum = nums[left] + nums[right];

            max_sum = max(max_sum, sum);

            left++;
            right--;
        }
        return max_sum;
    }
};