class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        //optimized - inplace - two pointers 
        int n = nums.size(); 
        int i=0, j=0; 

        while(i<n){
            if(nums[i] == 0){
                i++;
            }
            else{
                swap(nums[i], nums[j]); 
                i++, j++; 
            }
        }

        

        while(i<n && j<n){
            if(nums[j]  == 0 && nums[i] != 0){
                swap(nums[i], nums[j]); 
                i++, j++;
            }
            else if(nums[i] == 0){
                i++;
            }
            else{
                j++; 
            }
        }



        //brute force - used extra space 
        // int n = nums.size();
        // vector<int>ans(n, 0);
        // int j=0;
        // for(int i=0; i<n; i++){
          
        //         if(nums[i] != 0){
        //             ans[j] = nums[i]; 
        //             j++; 
        //         }
            
        // }
        // for(int i=0; i<n; i++){
        //     nums[i] = ans[i]; 
        // }
    }
};