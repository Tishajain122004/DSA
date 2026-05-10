class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {

        vector<int> final_ans; 
        for(int i=0; i<landStartTime.size(); i++){
            for(int j=0; j<waterStartTime.size(); j++){
                int first = landStartTime[i] + landDuration[i]; 
                int ans = 0; 
                if(waterStartTime[j] > first){ 
                    ans += waterStartTime[j] - first;
                }
                ans += first +  waterDuration[j]; 
                final_ans.push_back(ans); 
            }
        }

        for(int i=0; i<waterStartTime.size(); i++){
            for(int j=0; j<landStartTime.size(); j++){
                int first = waterStartTime[i] + waterDuration[i]; 
                int ans = 0; 
                if(landStartTime[j] > first){ 
                    ans += landStartTime[j] - first;
                }
                ans += first +  landDuration[j]; 
                final_ans.push_back(ans); 
            }
        }

        int min_el = INT_MAX; 
        for(int i=0; i<final_ans.size(); i++){
            min_el = min(final_ans[i], min_el);
        }
        return min_el; 
    }
};