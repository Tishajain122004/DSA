class Solution {
public:
    int maxProfitAssignment(vector<int>& diff, vector<int>& profit, vector<int>& worker) {
        int worker_size = worker.size();
        int diff_size = diff.size();
        int i=0, j=0;

        vector<pair<int, int>> diff_profit_pair; 

        for(int i=0; i<diff_size; i++){
            diff_profit_pair.push_back({diff[i], profit[i]});
        }

        sort(diff_profit_pair.begin(), diff_profit_pair.end());
        sort(worker.begin(), worker.end());

        int  max_profit_so_far = 0; 
        int total_profit = 0; 
        while(j<worker_size){
            while(i<diff_size && diff_profit_pair[i].first <= worker[j]){
                max_profit_so_far = max(max_profit_so_far, diff_profit_pair[i].second);
                i++;
            }
            total_profit += max_profit_so_far;
            j++;
        }
        return total_profit; 
    }
};