class Solution {
public:
    bool hasAlternatingBits(int n) {

        int last = n % 2;
        while(n>0){
            n= n/2;
            int curr = n%2; 
            if(curr == last){
                return false; 
            }
            last = curr; 
        } 
        return true; 
    }
};