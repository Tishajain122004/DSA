class Solution {
public:
    int strStr(string s, string n) {
        int needle_pointer = 0;
        int string_pointer = 0; 
        while(string_pointer < s.size() && needle_pointer < n.size()){
            if(s[string_pointer] == n[needle_pointer]){
                string_pointer++;
                needle_pointer++;
            }
            // else if(s[string_pointer] != n[needle_pointer] && needle_pointer == n.size()-1){
            //     return -1; 
            // }
            else{
                string_pointer = string_pointer - needle_pointer + 1;
                needle_pointer = 0;
                // string_pointer++;
            }
        }
        if(needle_pointer == n.size()){
            return string_pointer - needle_pointer;
        }
        return -1;
        
    }
};