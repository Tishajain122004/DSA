class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
        vector<vector<int>> ans; 
        sort(nums.begin(), nums.end());

        int curr_diff;
        int min_diff = INT_MAX;

        for(int i=0; i<nums.size() - 1; i++){
            curr_diff = nums[i+1] - nums[i]; 
            if(min_diff > curr_diff){
                min_diff = curr_diff;
                ans.clear();
                ans.push_back({nums[i], nums[i+1]});
            }
            else if(min_diff == curr_diff){
                ans.push_back({nums[i], nums[i+1]});
            }
        }
        return ans; 

        // for(int i=0; i<nums.size()-1; i++){
        //     diff = nums[i+1] - nums[i];
        //     min_diff = min(diff, min_diff); 
        // }

        // for(int i=0; i<nums.size() - 1; i++){
        //     int other_diff = nums[i+1] - nums[i];
        //     if(min_diff == other_diff){
        //         ans.push_back({nums[i], nums[i+1]});
        //     }
        // }
        // return ans; 
    }
};