class Solution {
public:
    int isFound(string part, string s){
        int pos = s.find(part);
        if (pos != string::npos){
            return pos;
        }
        return -1;
        
    }
    string removeOccurrences(string s, string part) {
       int len = s.length();
       int pos = isFound(part, s);


       while(pos != -1){     
            s.erase(pos, part.length());
            pos = isFound(part,s);
       }
       return s;
    }
};