class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        
        
        int count = 0;
        if(is_sorted(nums.begin(), nums.end())){
            return 0; 
        }
        while(!is_sorted(nums.begin(), nums.end())){
            int n = nums.size();
            int min_sum = INT_MAX;
            int curr_sum =0;
            int curr_idx = -1;
            for(int i=0; i<n-1; i++){
                curr_sum = nums[i] + nums[i+1];
                if(curr_sum < min_sum){
                    min_sum = curr_sum;
                    curr_idx = i;
                }
            }
            nums[curr_idx] = min_sum;
            nums.erase(nums.begin() + curr_idx + 1);
            count++;
        }
        return count;
    }
};