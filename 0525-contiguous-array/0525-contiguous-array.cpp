class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int currSum = 0;
        int maxLen = 0; 
        unordered_map<int, int> m; 
        m[0] = -1;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                currSum += -1;
            }
            else{
                currSum += 1;
            }
            if(m.find(currSum) != m.end()){
                int len = i - m[currSum];
                if(len > maxLen){
                    maxLen = len; 
                }
            }
            else
            {
                m[currSum] = i; 
            }
            
        }

        return maxLen; 
    }
};