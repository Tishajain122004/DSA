class Solution {
public:
    vector<int> shortestToChar(string s, char c) {

        int n = s.length(); 
        vector<int> idx; 
        vector<int> ans; 

        for(int i=0; i<n; i++){
            if(s[i] == c){
                idx.push_back(i);
            } 
        }

        // int min_val = INT_MAX; 
        for(int i=0; i<n; i++){
            int min_val = INT_MAX;
            for(int j=0; j<idx.size(); j++){
                min_val = min(min_val, abs(i-idx[j])); 
            }
            ans.push_back(min_val);
        }
        return ans; 
    }
};