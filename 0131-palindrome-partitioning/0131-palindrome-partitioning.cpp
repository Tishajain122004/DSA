class Solution {
public:

    bool isPalin(string s){
        string s2 = s;
        reverse(s2.begin(), s2.end());

        return s == s2; 
    }

    void getAllParts(string s, vector<string> &Partitions, vector<vector<string>>&ans ){
        if(s.size() == 0){
            ans.push_back(Partitions);
            return; 
        }


        for(int i=0; i<s.size(); i++){
            string part = s.substr(0, i+1);
            if(isPalin(part)){
                Partitions.push_back(part);
                getAllParts(s.substr(i+1), Partitions, ans);
                Partitions.pop_back();
            }
        }


    }
    vector<vector<string>> partition(string s) {
        vector<string> Partitions;
        vector<vector<string>>ans;
        getAllParts(s, Partitions, ans);
        return ans;  
        
    }
};