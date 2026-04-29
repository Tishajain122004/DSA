class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n = nums.size();
        int i=0, j=n-1; 
        // int cnt = 0; 
        unordered_set<double>s;

        sort(nums.begin(), nums.end());
        while(i<j){
            double val = ( nums[i] + nums[j] ) / 2.0; 
            s.insert(val); 
            i++, j--; 
        }
        int ans = s.size(); 
        return ans ; 
    }
};