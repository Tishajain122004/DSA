class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        int n = nums.size();
        int i=0, j=n-1, cnt =0; 
        sort(nums.begin(), nums.end()); 

        while(i<j){
            if(nums[i]+nums[j]<=limit){
                cnt++, i++, j--;
            }
            else{
                cnt++, j--;
            }
        }
        if(i==j){
            return cnt+1;
        }
        else{
            return cnt; 
        }
       
        // while(i<j){
        //     if( nums[j] == limit){
        //         cnt++, j--;
        //     }
        //     else{
        //         int s = nums[i]+nums[j];
        //         if(s == limit){
        //             cnt++, j--, i++;
        //         }
        //         else if(s > limit){
        //             cnt++, j--;
        //         }
        //         else{
        //             i++, j--, cnt++;
        //         }
        //     }
        // }
        // if(i==j && nums[j] <=limit){
        //     cnt++;
        // }
        // return cnt;
       
    }
};