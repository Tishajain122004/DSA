class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int n =  nums.size();
        int i=0, j=n-1;
        
        long long final_ans = 0; 
        while(i<=j){
            string ans;
            if(i==j){
                ans += to_string(nums[i]); 
            }
            else{
                ans += to_string(nums[i]) + to_string(nums[j]);
            }
            final_ans += stoll(ans);  
            i++, j--;
        }
        return final_ans; 
    }
};