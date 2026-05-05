class Solution {
public:
    bool isPalindrome(string s){
        int n = s.length(); 
        string s_rev = s;
        reverse(s_rev.begin(), s_rev.end());
        if(s == s_rev){
            return true;
        }
        return false; 
    }
    int removePalindromeSub(string s) {
        if(!isPalindrome(s)){
            return 2; 
        }
        else{
            return 1; 
        }
    }
};