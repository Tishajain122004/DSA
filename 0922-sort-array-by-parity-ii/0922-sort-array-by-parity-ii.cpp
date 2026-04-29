class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size(); 
        int i=0, j=1; 
        while(i<n && j<n){
            if(nums[i] % 2 != 0 && nums[j] %2 == 0){
                swap(nums[i], nums[j]); 
                i= i+2; 
                j= j+2; 
            }
            else if(nums[i] %2 != 0 && nums[j] %2 != 0){
                j = j+2; 
            }
            else{
                i = i+2;
            }
        }
        return nums; 
    }
};