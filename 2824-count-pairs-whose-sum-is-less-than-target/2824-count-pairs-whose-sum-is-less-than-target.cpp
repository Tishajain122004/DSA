class Solution {
public:
    int countPairs(vector<int>& nums, int target) {

        int n = nums.size(); 
        int i=0, j=n-1; 
        int cnt = 0; 

        sort(nums.begin(), nums.end()); 
        while(i<j){
            int sum = nums[i] + nums[j]; 

            if(sum < target){
                cnt = cnt + (j-i)   ; 
                i++;  
            }
            else{
                 j--; 
            }
        }
        return cnt; 

        //brute force - O(N*N) 
        // int cnt = 0;
        // int n = nums.size();
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         int sum = nums[i] +nums[j];
        //         if(sum <target){
        //             cnt++; 
        //         }
        //     }
        // }
        // return cnt; 
    }
};