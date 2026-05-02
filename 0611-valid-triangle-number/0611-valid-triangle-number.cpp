class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size(); 
        int cnt = 0;

        sort(nums.begin(), nums.end()); 
        

        for(int k=n-1; k>=2; k--){
            int j=k-1, i=0;
            while(i<j){
                if(nums[i] + nums[j] > nums[k]){
                    cnt += (j-i); 
                    j--;
                }
                else{
                    i++;
                }
            }
        } 
        return cnt;
        
        // for(int i=0; i<n-2; i++){
        //     for(int j=i+1; j<n-1; j++){
        //         for(int k=j+1; k<n; k++){
        //             if(nums[i] + nums[j] >nums[k] && nums[j] + nums[k] >nums[i] && nums[i] + nums[k] >nums[j]){
        //                 cnt++;
        //             }
        //         }
        //     }
        // }
        //return cnt; 
    }
};