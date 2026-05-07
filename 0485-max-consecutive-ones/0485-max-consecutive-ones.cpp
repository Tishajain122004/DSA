class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(); 
        int count = 0, max_cnt = 0; 

        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                count = 0; 
            }
            else{
                count++;
                max_cnt = max(max_cnt, count); 
            }
        }
        return max_cnt; 
    }
};