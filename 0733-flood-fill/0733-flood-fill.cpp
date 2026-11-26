class Solution {
public:
    void dfs(vector<vector<int>>& img,vector<vector<int>>& dup,int r,int c,int inicolor, int newcolor,int delrow[], int delcol[]){
        dup[r][c]=newcolor;
        int n=img.size();
        int m=img[0].size();
        for(int i=0;i<4;i++){
            int nrow=r+delrow[i];
            int ncol=c+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && img[nrow][ncol]==inicolor && dup[nrow][ncol]!=newcolor){
                dfs(img,dup,nrow,ncol,inicolor,newcolor,delrow,delcol);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>dup=image;
        int inicolor=image[sr][sc];
        int delrow[]={0,-1,1,0};
        int delcol[]={1,0,0,-1};
        dfs(image,dup,sr,sc,inicolor,color,delrow,delcol);
        return dup;

    }
};