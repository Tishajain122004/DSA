class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n = strs.size(); 
        string ans = ""; 
        for(int col=0; col<strs[0].size(); col++){
            for(int row=1; row<n; row++){

                if( strs[0][col] != strs[row][col]){
                    return ans;
                }
            }
            ans.push_back(strs[0][col]); 
        }
        return ans; 
    }
};