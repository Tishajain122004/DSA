class Solution {
public:
    void f(vector<int> &nums, vector<int> &ans, vector<vector<int>> &allsub, int i){
        if(i == nums.size()){
            allsub.push_back({ans});
            return; 
        }

        ans.push_back(nums[i]); 
        f(nums, ans, allsub, i+1); 
        ans.pop_back(); 
        f(nums, ans, allsub, i+1); 
    }








    // void sub(vector<int>& nums, vector<int>ans, int i, vector<vector<int>>& getAllSub){
    //     if(i == nums.size()){
    //         getAllSub.push_back({ans});
    //         return;
    //     }

    //     //inclusion
    //     ans.push_back(nums[i]);
    //     sub(nums, ans, i+1, getAllSub);

    //     ans.pop_back();
    //     //exclusion
    //     sub(nums, ans, i+1, getAllSub);
         
    // }

    vector<vector<int>> subsets(vector<int>& nums) {
        // int i =0; 
        // vector<vector<int>>getAllSub;
        // vector<int> ans;
        //  sub(nums, ans, i, getAllSub);

        // return getAllSub;


        int i=0; 
        vector<int> ans; 
        vector<vector<int>> allsub; 
        f(nums, ans, allsub, i);
        return allsub; 
    }

};