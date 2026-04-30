class Solution {
public:
    bool checkIfExist(vector<int>& nums) {

        int n = nums.size();
        unordered_set<int> s; 


        for(int i=0; i<n; i++){
            //  s.insert(nums[i]);
            if(s.find(nums[i] * 2) != s.end() || (nums[i] % 2 == 0 && s.find(nums[i] / 2) != s.end())){
                return true; 
            }
            else{
                 s.insert(nums[i]);
            }
        }
        return false; 
    }
};