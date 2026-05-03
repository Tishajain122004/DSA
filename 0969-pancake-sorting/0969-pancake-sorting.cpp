class Solution {
public:
    int find_max(vector<int>& arr, int n ){
        int m = INT_MIN; 
        int idx = 0; 
        for(int i=0; i<n; i++){
            if(arr[i]>m){
                m = arr[i]; 
                idx = i; 
            } 
        }
        return idx; 

    }
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> ans; 
        int n = arr.size(); 

        int i=0, j=n-1;
        int max_el; 

        for(int i=0; i<n; i++){
            max_el = find_max(arr,n-i);
            reverse(arr.begin(), arr.begin() + max_el + 1);
            ans.push_back(max_el+1);

            reverse(arr.begin(), arr.begin() + n - i);
            ans.push_back(n - i);
        }
        return ans; 
        
    }
};