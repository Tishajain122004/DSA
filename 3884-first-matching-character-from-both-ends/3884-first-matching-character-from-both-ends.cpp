class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.length();
        for(int i=0; i<n; i++){
            if(s[i] == s[n-i-1]){
                return i;
            }
        }
        return -1; 

        //using 2 pointers
        // int n = s.length(); 
        // if(n==1){
        //     return 0;
        // }
        // int i = 0;
        // int j=n-1;
        // int ans = 0;
        // while(i<j){
        //     if(s[i] == s[j]){
        //         ans = i;
        //         return ans; 
        //     }
        //     i++, j--;
        // }
        // if(i==j){
        //     return i;
        // }
        // return -1; 
    }
};