class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        int n = nums.size();
        int i=0, j=n-1, cnt =0; 
        sort(nums.begin(), nums.end()); 

        while(i<j){
            if( nums[j] == limit){
                cnt++, j--;
            }
            else{
                int s = nums[i]+nums[j];
                if(s == limit){
                    cnt++, j--, i++;
                }
                else if(s > limit){
                    cnt++, j--;
                }
                else{
                    i++, j--, cnt++;
                }
            }
        }
        if(i==j && nums[j] <=limit){
            cnt++;
        }
        return cnt;
        // sort(nums.begin(), nums.end());
        // while(i<j){
        //     if(nums[j] <= limit){
        //         cnt++;
        //         j--;
        //     }
        //     if(nums[i] == limit){
        //         cnt++;
        //         i++;
        //     }
        //     if(nums[i]<limit && nums[i] + nums[j] != limit && nums[i] + nums[i+1] < limit){
        //         cnt++; 
        //         i++;
        //     }
        //     if(nums[i] + nums[j] == limit){
        //         cnt++, i++, j--;
        //     }

        // } 
        // if(i==j){
        //     if(nums[i] == limit){
        //         cnt++;
        //     }
        // }
        
        // return cnt; 
    }
};