class Solution {
public:
    string findLongestWord(string s, vector<string>& dict) {

        int n = dict.size(); 
    string ans = "";
    for(int w=0; w<n; w++){
        string word = dict[w]; 
        int i=0, j=0; 
        while(i<s.length() && j<word.length()){
            if(s[i] != word[j]){
                i++; 
            }
            else{
                i++, j++; 
            }
        }
        if(j == word.length()){
           if(word.length() > ans.length()){
               ans = word; 
           }
           if(word.length() == ans.length() && word < ans){
               ans = word; 
           }
        }
    }
    
    return ans;


    }
};