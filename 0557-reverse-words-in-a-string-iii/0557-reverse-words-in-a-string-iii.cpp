class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int st = 0, end = 0;

        while(st<n && end <n){
            if(s[end] == ' '){
                reverse(s.begin()+st, s.begin()+end);
                st = end+1, end = st;
            } 
            else{
                end++;
            }
        }
        reverse(s.begin()+st, s.begin()+n);
        return s; 
    }
};