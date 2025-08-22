class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
       int m=grid.size(),n=grid[0].size(),min_i=n,max_i=0,min_j=m,max_j=0;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1){
                min_i=min(i,min_i);
                min_j=min(j,min_j);
                max_i=max(i,max_i);
                max_j=max(j,max_j);
            }
        }
       }
       return (max_i-min_i+1)*(max_j-min_j+1);
    }
};