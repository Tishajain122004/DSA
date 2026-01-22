class Solution {
public:
    int lengthOfLastWord(string s) {
       stringstream ss(s);
       string words;

       vector<string> all_words; 

       while(ss >> words){
            all_words.push_back(words);
       }
        return all_words.back().length();
    }
};