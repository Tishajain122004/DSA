class Solution {
public:
    bool isSubsequence(string s, string t) {

        if(s.empty()){
            return true;
        }

        int l = 0, r =0;
        while(l < s.size() && r< t.size()){
            if(s[l] == t[r]){
                l++;
                r++;
            }
            else{
                r++;
            }
        }
        if(l == s.size()){
            return true;
        }
        return false; 
    }
};