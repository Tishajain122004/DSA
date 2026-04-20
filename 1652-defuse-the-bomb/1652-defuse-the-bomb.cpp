class Solution {
public:
    vector<int> decrypt(vector<int>& nums, int k) {
        int n = nums.size(); 
        vector<int> ans(n, 0); 

        if(k==0){
            // for(int i=0; i<n; i++){
            //     nums[i] = 0; 
            // }
            return ans; 

        }
        else if(k>0){
            
            // vector<int> ans(n, 0); 
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
            // vector<int> ans(n, 0);
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
        return ans; 
    }
};