class Solution {
public:
    int getNext(int n){
        int sum = 0; 
        while(n > 0){
            int digit = n % 10; 
            sum += digit * digit; 
            n /= 10; 
        }
        return sum; 
    }
    bool isHappy(int n) {
        int slow = n; 
        int fast = getNext(n); 
        while(fast != 1 && slow != fast){
            slow = getNext(slow);
            fast = getNext(getNext(fast)); 
        }
        if(fast == 1){
            return true;
        }
        return false; 
    }
    
    // bool detectCycle(int sum, unordered_set<int> &s){
    //     if(s.find(sum) != s.end()){
    //         return false; 
    //     }
    //     else{
    //         s.insert(sum); 
    //         return true; 
    //     }
    // }

    // bool checkHappy(int n, unordered_set<int> &s){
    //     if(n==1){
    //         return true; 
    //     }
    //     int sum = 0; 
    //     while(n > 0){
    //         int digit = n % 10; 
    //         sum += digit * digit; 
    //         n /= 10; 
    //     }
    //     if(!detectCycle(sum, s)){
    //         return false;
    //     }
    //     else{
    //         return checkHappy(sum, s); 
    //     }
    // }

    // bool isHappy(int n) {
    //     unordered_set<int>s;
    //     return checkHappy(n, s); 
    // }
};