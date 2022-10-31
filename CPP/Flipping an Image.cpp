class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& img) {
            for(int i=0;i<img.size();i++){
            reverse(img[i].begin(),img[i].end());
            for(int j=0;j<img[i].size();j++)
                img[i][j]=(img[i][j]==0)?1:0;
    }
        return img;
    }
};
