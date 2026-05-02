class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        vector<int>nums_copy = nums;

        sort(nums_copy.begin(), nums_copy.end());
        int i=0, j=n-1;
        
        int ans = 0;
        while(i<n && j<n){
            if(nums[i] != nums_copy[i]  &&  nums[j] != nums_copy[j]){
                ans = j-i+1;
                break;
                //i++, j--; 
            }
            else if(nums[i] != nums_copy[i]  &&  nums[j] == nums_copy[j]){
                j--;
            }
            else if(nums[i] == nums_copy[i]  &&  nums[j] != nums_copy[j]){
                i++;
            }
            else{
                i++;
            }
        }
        return ans;



        // int k=n-1, j=k-1, i=0, cnt =0;
        // while(k>=0 && j>=0 && i<n){
        //     if(nums[i] < nums[j] && nums[j]<nums[k]){
        //         i++, j--, k--;
        //     }
        //     else if(nums[j] > nums[k]){
        //         i++;
        //     }
        //     else{
        //         cnt += (k-i+1);
        //     }
        // }
        // return cnt;
    }
};