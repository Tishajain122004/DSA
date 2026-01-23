class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n; 
        if(k == 0){
            return; 
        }
        int s = 0, e = n-1;
        while(s<e){
            swap(nums[s], nums[e]);
            s++;
            e--;
        }

        s =0;
        e = k -1;

        while(s<e){
            swap(nums[s], nums[e]);
            s++;
            e--;
        }

        s = k;
        e = n-1;
        while(s<e){
            swap(nums[s], nums[e]);
            s++;
            e--;
        } 
        // reverse(nums.begin(), nums.end());

        // reverse(nums.begin(), nums.begin() + k);
        // reverse(nums.begin() + k, nums.end()); 
    }
};