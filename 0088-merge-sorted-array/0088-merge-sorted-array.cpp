class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // int n = nums1.size() - 1;
        int i = m-1;
        int j = n-1;
        int idx = m+n-1;
        int st = 0;

        if (nums1.empty()) return;

        if(m+n == 1){
            if(m == 1){
                return; 
            }
            else{
                nums1[0] = nums2[0];
                return;
            }
        }

        while(i>=0 && j>=0){
            if(nums2[j]>nums1[i]){
                nums1[idx] = nums2[j];
                idx--;
                j--;
            }
            else{
                nums1[idx] = nums1[i];
                i--;
                idx--;
            }
        }
        while(j>=0){
            nums1[idx] = nums2[j];
            idx--;
            j--;
        }
        
    }
};