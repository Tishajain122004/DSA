class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int start = 0;
        int curr_tank = 0;
        int total_diff =0;

        for(int i=0; i<n; i++){

            curr_tank += gas[i] - cost[i];
            total_diff += gas[i] - cost[i];
            if(curr_tank < 0){
                start = i+1; 
                curr_tank = 0; 
            }
        }

        if(total_diff < 0){
            return -1; 
        }
        return start; 
    }
};