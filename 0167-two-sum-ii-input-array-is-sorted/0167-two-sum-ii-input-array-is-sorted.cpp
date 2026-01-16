class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        int left = 0;
        int right = n - 1; 

        while(left <= right){
            if(nums[left] + nums[right] == target){
                ans.push_back(left + 1);
                ans.push_back(right + 1);
                break;
            }
            if(nums[left] + nums[right] > target){
                right--;
            }
            if(nums[left] + nums[right] < target){
                left++;
            }
        }
        return ans; 
    }
};