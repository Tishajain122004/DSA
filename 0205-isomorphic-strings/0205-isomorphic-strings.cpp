class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false; 
        }

        int n = s.length(); 
        unordered_map<char, char> smap; 
        unordered_map<char, char> tmap;

        for(int i=0; i<n; i++){
            if(smap.find(s[i]) == smap.end()){
                
                if(tmap.find(t[i]) != tmap.end()){
                    return false; 
                }
                smap[s[i]] = t[i];
                tmap[t[i]] = s[i];
            }
            else{
                if(smap[s[i]] != t[i]){
                    return false;
                }
            }
            
        }
        return true; 
    }
};