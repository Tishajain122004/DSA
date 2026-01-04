class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size(); 
        int totalSum = 0; 
        for(int a=0; a<n; a++){
            int count = 0;
            int currSum = 0; 
            for(int i=1; i*i <= nums[a]; i++){
                if(nums[a] % i ==0){
                    if(i*i == nums[a]){
                        count++;
                        currSum += i; 
                       
                    }
                    else{
                        count += 2;
                        currSum += i;
                        currSum += nums[a]/i; 
                    }
                }
                if(count > 4){
                    break;
                }
            }
            if(count == 4){
                totalSum += currSum; 
            }
            
        }
        return totalSum; 
        
    }
};