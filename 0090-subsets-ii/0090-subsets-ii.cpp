//tisha 

// class Solution {
// public:
//     void sub(vector<int>& nums, vector<int>ans, int i, set<vector<int>>& getAllSub){

//         sort(nums.begin(), nums.end());

//         if(i == nums.size()){
//             getAllSub.insert(ans);
//             return;
//         }

//         //inclusion
//         ans.push_back(nums[i]);
//         sub(nums, ans, i+1, getAllSub);

//         ans.pop_back();
//         //exclusion
//         sub(nums, ans, i+1, getAllSub);
         
//     }

//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         int i =0; 
//         set<vector<int>>getAllSub;
//         vector<int> ans;
//         sub(nums, ans, i, getAllSub);

//         vector<vector<int>> result(getAllSub.begin(), getAllSub.end());
//         return result; 
//     }
// };


//shraadha khapra 
class Solution {
public:
    void sub(vector<int>& nums, vector<int>ans, int i, vector<vector<int>>& getAllSub){

        sort(nums.begin(), nums.end());

        if(i == nums.size()){
            getAllSub.push_back({ans});
            return;
        }

        //inclusion
        ans.push_back(nums[i]);
        sub(nums, ans, i+1, getAllSub);

        ans.pop_back();
        //exclusion
        int idx = i +1;
        while(idx <nums.size() && nums[idx] == nums[idx -1]) idx++;
        sub(nums, ans, idx, getAllSub);
         
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int i =0; 
        vector<vector<int>>getAllSub;
        vector<int> ans;
        sub(nums, ans, i, getAllSub);

        return getAllSub; 
    }
};


