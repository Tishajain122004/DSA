class Solution {
public:
    int maxProfit(vector<int>& price) {
        
        int profit =0;
        for(int i=1; i<price.size(); i++){
            if(price[i-1]<price[i]){
                profit +=  price[i] - price[i-1];
            }
            
        }
        return profit; 
        
    }
};