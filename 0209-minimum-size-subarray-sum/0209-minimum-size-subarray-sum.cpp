class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int left = 0;
        int curr_sum = 0;
        int min_length = INT_MAX; 

        for(int i =0; i<nums.size(); i++){
            curr_sum += nums[i];

            while(curr_sum >= target){
                min_length = min(min_length, i - left + 1);
                curr_sum -= nums[left];
                left++;
            }

        }  
        if(min_length == INT_MAX){
            return 0;
        }
        return min_length; 
    }
};