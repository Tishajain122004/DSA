class Solution {
public:
    bool removeOneAndCheck(string s, int n, int i, int j){
        while(i <= j){
            if(s[i] == s[j]){
                i++, j--; 
            }
            else{
                return false;
            }
        }

        return true; 
    }
    bool validPalindrome(string s) {
        int n = s.length();
        int i=0, j=n-1; 
        while(i<=j){
            if(s[i] != s[j]){
                if(removeOneAndCheck(s, n, i+1, j)){
                    return true; 
                }
                else if(removeOneAndCheck(s, n, i, j-1)){
                    return true; 
                }
                else{
                    return false; 
                }
                i++, j--; 
            }
            else{
                i++, j--; 
            }
        }
        return true; 
    }
};