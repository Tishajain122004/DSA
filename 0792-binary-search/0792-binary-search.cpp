class Solution {
public:

    int bins(vector<int>& arr, int tar, int st, int end){

        if(st<=end){
            int mid = st +(end - st) / 2;
            if(tar == arr[mid]) return mid;
            else if(tar > arr[mid]){
                return bins(arr, tar, mid+1, end);
            }
            else{
                return bins(arr, tar, st, mid-1);
            }
        }
        return -1;
    }
    int search(vector<int>& arr, int tar) {
        int st = 0, end = arr.size() - 1;
        return bins(arr, tar, st, end);

    }
};