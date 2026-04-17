class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        //using map 
        unordered_map<int, int>mp;
        int n = nums.size(); 


        for(int i=0; i<n; i++){
            if(mp.find(nums[i]) != mp.end()){
                int prev_idx = mp[nums[i]]; 
                if(abs(i - prev_idx) <= k){
                    return true; 
                }
            }
            // else{
            mp[nums[i]] = i; 
            // }
        }
        return false; 

        //using set
        // unordered_set<int> s; 
        // int n = nums.size(); 

        // for(int i=0; i<n; i++){
        //     if(s.find(nums[i]) != s.end()){
        //         return true; 
        //     }
        //     else{
        //         s.insert(nums[i]);
        //         if(i >= k){
        //             s.erase(nums[i - k]);
        //         }
        //     }
        // }
        // return false; 

        
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