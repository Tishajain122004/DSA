class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
       sort(nums.begin(), nums.end()); 
       int n = nums.size(); 
       int i=0, j = i+1; 
       int cnt = 0; 
       set<pair<int, int>>s; 

       while(i<n && j<n){
        if(i==j){
            j++;
            continue;
            
        }
        if(abs(nums[i]  - nums[j]) == k){
            s.insert({nums[i], nums[j]}); 
            i++, j++;
        }
        else if( (nums[j]-nums[i]) > k){
            i++; 
        }
        else{
            j++; 
        }
       } 
       return s.size(); 
    }
};