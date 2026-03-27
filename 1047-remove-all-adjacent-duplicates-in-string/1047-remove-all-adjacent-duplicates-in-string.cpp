class Solution {
public:
    string removeDuplicates(string s) {
        int i=0; 
        int n = s.length() - 1; 
        while(i<n){
            while(s[i] == s[i+1]){
                // string part = s.substr(i, i+1); 
                s.erase(i, 2); 
                n = s.length()-1; 
                i=0; 
            }
            i++;
        }
        return s; 
    }
};