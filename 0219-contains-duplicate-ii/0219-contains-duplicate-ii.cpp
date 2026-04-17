class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_set<int> s; 
        int n = nums.size(); 

        for(int i=0; i<n; i++){
            if(s.find(nums[i]) != s.end()){
                // s.insert(nums[i]);
                return true; 
            }
            else{
                s.insert(nums[i]);
                if(i >= k){
                    s.erase(nums[i - k]);
                }
            }
        }
        return false; 
        //brute force - O(n*n)
        // int n = nums.size(); 

        // for(int i=0; i<n; i++){
        //     for(int j =i+1; j<n; j++){
        //         if(nums[i] == nums[j]){
        //             if(abs(i-j) <= k){
        //                 return true; 
        //             }
        //         }
        //     }
        // }
        // return false; 
    }
};