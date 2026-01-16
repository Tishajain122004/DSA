class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        int left = 0;
        int right = n - 1; 

        while(left < right){

            int currSum = nums[left] + nums[right];
            if(currSum == target){
                ans.push_back(left + 1);
                ans.push_back(right + 1);
                break;
            }
            else if(currSum > target){
                right--;
            }
            if(currSum < target){
                left++;
            }
        }
        return ans; 
    }
};