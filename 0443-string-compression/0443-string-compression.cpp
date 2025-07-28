class Solution {
public:
    int compress(vector<char>& chars) {
        int prev = 0; 
        int next = prev + 1;
        int write = 0;
        while(next<=chars.size()){
            int freq = 1;
            while (next < chars.size() && chars[prev] == chars[next]){
                freq++;
                next++;
                prev++;
            }
            if(freq == 1){
                chars[write] = chars[prev];
                write++;
            }
            if(freq>1){
                chars[write++] = chars[prev];                
                string countStr = to_string(freq);
                for (char c : countStr) {
                    chars[write++] = c;
                }
            }
            prev = next;
            next = prev + 1;
        }
    return write;
    }
};