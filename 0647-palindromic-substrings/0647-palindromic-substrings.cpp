class Solution {
public:
    bool checkPalindrome(string& sub){
        int n = sub.length(); 
        int i=0, j=n-1; 
        if(sub.length() == 1){
            return true; 
        }
        while(i<j){
            if(sub[i] != sub[j]){
                return false; 
            }
            i++, j--; 
        }
        
        return true; 
    }
    int countSubstrings(string s) {
        int n = s.length(); 
        int palCount = 0; 

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int len = j - i+1; 
                string sub = s.substr(i, len); 
                if(checkPalindrome(sub)){
                    palCount++; 
                }
            }
        }
        return palCount; 
    }
};