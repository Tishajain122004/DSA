class Solution {
public:

    int calculateSum(unordered_map<int, int>& mp, int x){
        vector<pair<int, int>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), [](pair<int, int>& a, pair<int, int>& b) {
            if (a.second == b.second) {
                return a.first > b.first; 
            }
            return a.second > b.second; 
        });

        int sum = 0;
        int limit = min((int)vec.size(), x);
        
        for(int i = 0; i < limit; i++){
            sum += vec[i].first * vec[i].second;
        }
        return sum;
    }
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int>ans; 
        int n=nums.size(); 
        unordered_map<int, int>mp;

        int i=0; 
        while(i<k){
            mp[nums[i]]++;
            i++;
        }

        ans.push_back(calculateSum(mp, x));

        for(int i=k; i<n; i++){
            mp[nums[i]]++;
            mp[nums[i-k]]--;
            if(mp[nums[i-k]] == 0){
                mp.erase(nums[i-k]);
            }
            ans.push_back(calculateSum(mp, x));
        }
        return ans; 
    }
};