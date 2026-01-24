class Solution {
public:
    bool canConstruct(string ransomnote, string magazine) {
        unordered_map<char, int>m;
        
        for(int i=0; i<magazine.size(); i++){
            m[magazine[i]]++;
        }
        for(int i=0; i<ransomnote.size(); i++){
            char letter = ransomnote[i];

            if(m[letter] > 0){
                m[letter]--;
            }
            else{
                return false; 
            }
        }
        return true; 
    }
};