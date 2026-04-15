class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int>m; 

        int ans = 0; 
        int count = 0; 
        int st =0; 
        for(int i=0; i<s.length(); i++){
            char c = s[i]; 
            if(m.find(c) == m.end()){
                m[c] = i; 
            }
            else{
                st = max(m[c] + 1, st);                
                m[c] = i;
            } 
            count = i-st+1; 
            ans = max(count, ans); 
        }
        return ans; 
    }
};