class Solution {
public:
    int captureForts(vector<int>& nums) {
        int n = nums.size(); 
        int i=0, tmp = 0;
        int final_ans1 = 0; 

        while(i<n){
            if(nums[i] == 1){
                tmp = i; 
                //i++;
            }

            if(nums[tmp] == 1 && nums[i] == -1){
                int ans = i-tmp-1;
                final_ans1 = max(final_ans1, ans);
                tmp = i; 
                i++;
            }
            else{
                i++;
            }
        }

        int j = n-1; 
        int tmp2 = j; 
        int final_ans2 = 0; 
        while(j>=0){
            if(nums[j] == 1){
                tmp2 = j; 
            }
            if(nums[j] == -1 && nums[tmp2] == 1){
                int ans = tmp2-j-1;
                final_ans2 = max(final_ans2, ans);
                tmp2 = j; 
                j--;
            }
            else{
                j--;
            }
        }

        return max(final_ans1, final_ans2); 
    }
};