class Solution {
public:
    string removeDuplicates(string s) {

        //TC - 0(N^2)


        // int i=0; 
        // int n = s.length() - 1; 
        // while(i<n){
        //     while(s[i] == s[i+1]){
        //         s.erase(i, 2); 
        //         n = s.length()-1; 
        //         i=0; 
        //     }
        //     i++;
        // }
        // return s; 

        // int n = s.length(); 
        // string ans = ""; 
        // for(int i=0; i<n; i++){
        //     if(ans.empty()){
        //         ans.push_back(s[i]);
        //     }
        //     else if(ans.back() == s[i]){
        //         ans.pop_back(); 
        //     }
        //     else{
        //         ans.push_back(s[i]); 
        //     }
        // }
        // return ans; 





        //using stack 
        stack<char> st; 
        int n = s.length(); 
        string ans = ""; 
        for(int i=0; i<n; i++){
            if(st.empty()){
                st.push(s[i]); 
            }
            else if(st.top() == s[i]){
                st.pop();
            }
            else{
                st.push(s[i]); 
            }
        }
        while(!st.empty()){
            ans += st.top(); 
            st.pop(); 

        } 
        reverse(ans.begin(), ans.end()); 
        return ans; 
    }
};