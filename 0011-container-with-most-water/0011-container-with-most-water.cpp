class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int h, b;
        int area; 
        int maxArea = 0;
        int left = 0;
        int right = size - 1;

        while(left<right){
            h = min(height[left], height[right]);
            b = right - left;
            area = h*b;
            maxArea = max(maxArea, area);
            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return maxArea;

    }
};