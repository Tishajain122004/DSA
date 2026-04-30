class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i  = 0, j=0; 
        int min_val = INT_MAX;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] == nums2[j]){
                min_val = min(min_val, nums1[i]);
                i++, j++;
            } 
            else if(nums1[i] <nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        if(min_val == 2147483647){
            return -1;
        } 
        else{
            return min_val;
        }
    }
};