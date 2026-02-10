class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int max_len =0; 
        for(int i=0; i<n; i++){
            int evenCount =0, oddCount = 0; 
            unordered_set<int> set; 
            for(int j=i; j<n; j++){
                if(set.find(nums[j]) == set.end()){
                    if(nums[j]%2 == 0){
                        evenCount++;
                    }
                    else{
                        oddCount++; 
                    }
                    set.insert(nums[j]); 
                }
                if(evenCount == oddCount){
                    max_len = max(max_len, j-i+1); 
                }
            }
        }
        return max_len; 

        
    }
};