class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size(); 
        vector<int> finalarr;
        int finalMin; 
        int diff; 
        int min_diff = INT_MAX;  

        for(int i=0; i<n; i++){
            int h = stoi(timePoints[i].substr(0, 2)); 
            int m = stoi(timePoints[i].substr(3, 2)); 
            
            finalMin = (h * 60 ) + m; 
            finalarr.push_back(finalMin);
            
            
        }

        sort(finalarr.begin(), finalarr.end()); 
        for(int i=0; i<n-1; i++){
            diff = finalarr[i+1] - finalarr[i]; 
            min_diff  = min(diff, min_diff); 
        }

        int last_diff = (finalarr[0] + 1440) - finalarr[n-1];
        min_diff  = min(last_diff, min_diff); 
        return min_diff;
    }
};