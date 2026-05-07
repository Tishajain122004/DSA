class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size(); 
        int ans = 0, final_ans = 0, zero_cnt = 0, fast =0, slow = 0;
        while(fast<n){
            if(nums[fast] == 0){
                zero_cnt++;
            }
            while(zero_cnt > k){
                if(nums[slow] == 0){
                    zero_cnt--;
                }
                slow++;
            }
            ans = fast - slow + 1; 
            final_ans = max(ans, final_ans); 
            fast++; 
        }
        return final_ans; 
    }
};