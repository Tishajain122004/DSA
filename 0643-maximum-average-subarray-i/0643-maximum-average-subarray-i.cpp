class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size(); 
        int win_sum = 0; 
        

        for(int i=0; i<k; i++){
            win_sum += nums[i]; 
        }

        int max_sum = win_sum;
        for(int i=k; i<n; i++){
            win_sum += nums[i];
            win_sum -= nums[i-k];
            max_sum = max(win_sum, max_sum);
        }
        return (double)max_sum/k; 
    }
};