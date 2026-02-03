class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int p=0, n= nums.size();
        int q=0, r=0; 
        // if(n < 3) return false;
      
            while(p < n-1 && nums[p] < nums[p+1]){
                p++;
            }
            if(p==0 || p == n-1) return false; 
            q = p;

            while(q< n-1 && nums[q]>nums[q+1]){
                q++;
            }
            if(q == p) return false; 
            r =q;
            
            while(r<n-1 && nums[r]<nums[r+1]){
                r++; 
            }
            if(r == q) return false; 
            
            if(r == n-1){
                return true;
            }
            return false;
    }
};