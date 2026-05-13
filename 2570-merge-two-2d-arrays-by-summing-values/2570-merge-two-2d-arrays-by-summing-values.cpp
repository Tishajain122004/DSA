class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans; 
        map<int, int>store_map; 
        int n = nums1.size(); 
        int m = nums2.size(); 

        for(int i=0; i<n; i++){
            store_map[nums1[i][0]] += nums1[i][1];
        }

        for(int i=0; i<m; i++){
            store_map[nums2[i][0]] += nums2[i][1];
        }

        for(auto it : store_map){
            ans.push_back({it.first, it.second}); 
        }

        return ans; 
    }
};