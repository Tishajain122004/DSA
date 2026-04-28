class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n = nums.size(); 
        int cnt = 0; 

        int i=0, j=i+1, k=j+1;
        while(k<n){
            int diff1 = nums[j] - nums[i];
            int diff2 = nums[k] - nums[j];
            if(diff1 < diff){
                j++;
            }
            else if(diff1 > diff){
                i++;
            }
            else{
                if (diff2 < diff) {
                    k++; 
                } 
                else if (diff2 > diff) {
                    j++; 
                } 
                else { 
                    cnt++;
                    i++; 
                    j++; 
                    k++;
                }
            }   
            if(i==j) j++;
            if(j==k) k++;         
        }
        return cnt;
    }
};