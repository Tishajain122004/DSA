class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& img) {
        int n = img.size(); 

        for(int r=0; r<n; r++){
            reverse(img[r].begin(), img[r].end());
            for(int col=0; col<img[0].size(); col++){
                if(img[r][col] == 0){
                    img[r][col] = 1; 
                }
                else{
                    img[r][col] = 0; 
                }
            }
        }
        return img;
    }
};