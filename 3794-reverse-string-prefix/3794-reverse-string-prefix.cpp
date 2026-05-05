class Solution {
public:
    string reversePrefix(string s, int k) {

        reverse(s.begin(), s.begin()+k); 
        return s; 
        //using pointers
        // int n = s.length(); 
        // int i=1;
        // while(i<=n){
        //     if(i==k){
        //         reverse(s.begin(), s.begin() +k);
        //         break; 
        //     }
        //     i++;
        // }
        // return s; 
    }
};