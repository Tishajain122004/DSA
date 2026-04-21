class Solution {
public:
    int findTheDistanceValue(vector<int>& nums1, vector<int>& nums2, int d) {

        // while(i<n1 && j<n2){

        // }
        int count =0; 
        int n1 = nums1.size();
        int n2 = nums2.size(); 
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(abs(nums1[i] - nums2[j]) <= d ){
                    count++; 
                    break; 
                }
            }
        }
        return n1 - count; 
    }
};