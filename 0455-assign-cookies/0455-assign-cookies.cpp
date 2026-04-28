class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i=0, j=0; 
        int g_size = g.size(); 
        int s_size = s.size(); 
        int count = 0; 

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while(i<g_size && j<s_size){
            if(g[i] <= s[j]){
                count++; 
                i++, j++;
            }
            else{
                j++;
            }

        }
        return count; 
    }
};