class Solution {
public:
    vector<int> decrypt(vector<int>& nums, int k) {
        int n = nums.size(); 

        if(k==0){
            for(int i=0; i<n; i++){
                nums[i] = 0; 
            }
        }
        else if(k>0){
            // int sum =0; 
            // for(int i=0; i<n; i++){
            //     sum += nums[i]; 
            // }

            // for(int i=0; i<n; i++){
            //     nums[i] = sum - nums[i]; 
            // }
            vector<int> ans(n, 0); 
            for(int i=0; i<n; i++){
                int tmp_sum = 0; 
                for(int step = 1; step<=k; step++){
                    int prev_idx = (i + step + n) % n; 
                    tmp_sum += nums[prev_idx]; 
                }
                ans[i] = tmp_sum; 
            }
            return ans; 
        }
        else{
            vector<int> ans(n, 0);
            int prev_idx; 
            for(int i =0; i<n; i++){
            
                int tmp_sum = 0; 
                for(int step = 1; step<=abs(k); step++){
                    prev_idx = (i - step + n) % n;
                    tmp_sum += nums[prev_idx]; 
                    
                }
                ans[i] += tmp_sum; 
            }
            return ans; 
        }
        return nums; 
    }
};