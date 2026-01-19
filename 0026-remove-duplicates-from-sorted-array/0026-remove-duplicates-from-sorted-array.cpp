class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int x = 0; 

        for(int i=1; i<arr.size(); i++){
            if(arr[x] != arr[i]){
                x = x+1;
                arr[x]= arr[i]; 
            }
        }
        return x+1;
    }
};