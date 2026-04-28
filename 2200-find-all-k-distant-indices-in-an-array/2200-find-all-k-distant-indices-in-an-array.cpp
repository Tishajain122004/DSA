class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int j=0; 
        int n = nums.size(); 
        vector<int>ans; 

        while(j<n){


            if(nums[j] == key){
                int st = max(j-k, 0); 
                int end = min(j+k, n-1); 

                if(!ans.empty() && ans.back() >= st){
                    st = ans.back() +1 ; 
                }
                
                for(int i=st; i<=end; i++){
                    ans.push_back(i); 
                }
                
            }
            j++;
        }
        return ans; 

        //Brute Force - O(n*n)
        // int n = nums.size(); 
        // vector<int> new_arr;
        // vector<int> ans; 

        // for(int i=0; i<n; i++){
        //     if(nums[i] == key){
        //         new_arr.push_back(i);
        //     }
        // }

        // int i=0; 
        // while(i<n){
        //     int j=0;
        //     while(j<new_arr.size()){
        //         if(abs(i-new_arr[j]) <= k){
        //             ans.push_back(i); 
        //             break;
        //         }
        //         j++;
        //     }
        //     i++;
        // }
        // return ans; 
    }
};