class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size(); 
        double win_sum = 0; 
        

        for(int i=0; i<k; i++){
            win_sum += nums[i]; 
        }

        double max_sum = win_sum;
        for(int i=k; i<n; i++){
            win_sum += nums[i];
            win_sum -= nums[i-k];
            max_sum = max(win_sum, max_sum);
        }
        return max_sum/k; 
    }
};