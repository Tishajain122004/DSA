class Solution {
public:

    bool checkPal(string str){
        int n= str.length();
        int i=0, j=n-1;

        while(i<j){
            if(str[i] != str[j]){
                return false; 
            }
            i++, j--;
        }
        return true; 
    }
    string firstPalindrome(vector<string>& words) {
        string ans = ""; 
        for(string str : words){
            if(checkPal(str)){
                ans = str; 
                return ans;
            } 
        }
        return ans; 
        
    }
};