class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        int i=0, j= i+1;
        
        while(i<n && j<n){
            if(nums[i] == nums[j]){
                nums[i] = nums[i]*2;
                nums[j] = nums[j]*0;
            }
            i++, j++;
        }
        int k=0, l=k+1;
        while(k<n && l<n){
            if(nums[k] ==0 && nums[l] != 0){
                swap(nums[k], nums[l]);
                k++, l++;
            }
            else if(nums[k] == 0 && nums[l] == 0){
                 l++;
            }
            else{
                k++, l++;
            }
        }
        return nums; 
    }
};