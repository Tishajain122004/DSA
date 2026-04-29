class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int>s; 
        int max_val = -1;
        int n = nums.size(); 

      
        for(int i=0; i<n; i++){
            if(s.find((nums[i])/(-1)) != s.end()){
                max_val = max(max_val, abs(nums[i])); 
            }
            else if(s.find((nums[i])*(-1)) != s.end()){
                max_val = max(max_val, abs(nums[i]));
            }
            s.insert(nums[i]);
        }
        return max_val; 
    }
};