class Solution {
public:
    vector<int> findNG(vector<int>& nums2){
        stack<int> s;
        vector<int> ans(nums2.size()); 
        for(int i=nums2.size() -1; i>=0; i--){
            while(s.size() > 0 && s.top()<= nums2[i]){
                s.pop(); 
            }
            if(s.empty()){
                ans[i] = -1;
            }
            else{
                ans[i] = s.top();  
            }
            s.push(nums2[i]);
        }
        return ans; 
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> nums2ans = findNG(nums2);
        vector<int> finalAns;
    
        for(int i=0; i<nums1.size();  i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    finalAns.push_back(nums2ans[j]);
                    break;
                }
            }
        }
        return finalAns; 
    }
};