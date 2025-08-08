class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();

        // for(int i=0; i<n; i++){
        //     for(int j = i+1; j<n; j++){
        //         if(nums[i] + nums[j] == target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             break;
        //         }
        //     }
        // }

        // using sorting 
        // int small = 0;
        // int large = n-1;
        // sort(nums.begin(), nums.end());
        // while(small <= large){
        //     int sum = nums[small] + nums[large];
        //     if(sum == target){
        //         ans.push_back(small);
        //         ans.push_back(large);
        //         break;
        //     }
        //     else if(target < sum){
        //         large--;
        //     }
        //     else{
        //         small++;
        //     }
        // }
        // return ans;

        //using map - 
        unordered_map<int, int> m;
        for(int i=0; i<n; i++){
            int first = nums[i];
            int second = target - first;
            if(m.find(second) != m.end())   
            {
                ans.push_back(i);
                ans.push_back(m[second]);
                break;
            } 
            m[first] = i;
        }
        return ans;
    }
};