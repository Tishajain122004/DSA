class Solution {
public:
    int numFriendRequests(vector<int>& nums) {
        int n = nums.size(); 
        //int x = 0, y = n-1;
        int cnt = 0; 

        sort(nums.begin(), nums.end()); 
        for(int x = 0; x<n; x++){
            if(nums[x] <= 14){
                continue;
            }
            int target = 0.5 * nums[x] + 7;
            int index = upper_bound(nums.begin(), nums.end(), target) - nums.begin();

            int Start = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
            int End = upper_bound(nums.begin(), nums.end(), nums[x]) - nums.begin();
            
            cnt += (End - Start - 1);
        }

        return cnt; 
    }
};