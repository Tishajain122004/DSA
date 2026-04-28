class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size(); 
        vector<int> new_arr;
        vector<int> ans; 

        for(int i=0; i<n; i++){
            if(nums[i] == key){
                new_arr.push_back(i);
            }
        }

        int i=0; 
        while(i<n){
            int j=0;
            while(j<new_arr.size()){
                if(abs(i-new_arr[j]) <= k){
                    ans.push_back(i); 
                    break;
                }
                j++;
            }
            i++;
        }
        return ans; 
    }
};