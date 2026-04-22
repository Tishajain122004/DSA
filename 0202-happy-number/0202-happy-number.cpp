class Solution {
public:

    
    bool detectCycle(int sum, unordered_set<int> &s){
        if(s.find(sum) != s.end()){
            return false; 
        }
        else{
            s.insert(sum); 
            return true; 
        }
    }

    bool checkHappy(int n, unordered_set<int> &s){
        if(n==1){
            return true; 
        }
        int sum = 0; 
        while(n > 0){
            int digit = n % 10; 
            sum += digit * digit; 
            n /= 10; 
        }
        if(!detectCycle(sum, s)){
            return false;
        }
        else{
            return checkHappy(sum, s); 
        }
    }

    bool isHappy(int n) {
        unordered_set<int>s;
        return checkHappy(n, s); 
    }
};