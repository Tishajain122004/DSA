class Solution {
public:
    double minimumAverage(vector<int>& nums) {

        vector<double> avgs;  
        int n = nums.size(); 
        sort(nums.begin(), nums.end()); 

        int i=0, j=n-1;
        while(i<j){
            double val = (nums[i]+nums[j]) /2.0;
            avgs.push_back(val);
            i++, j--;
        }

        double min_val = INT_MAX; 
        for(int i=0; i<avgs.size(); i++){
            min_val = min(min_val, avgs[i]);
        }

        return min_val; 
    }
};