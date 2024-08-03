class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size(),n=matrix[0].size();
        int c=0,rmin=0,rmax=m-1,cmin=0,cmax=n-1;
        while(c<(m*n)){
            for(int i=cmin;c<(m*n)&&i<=cmax;i++,c++) ans.push_back(matrix[rmin][i]);
            rmin++;
            for(int i=rmin;c<(m*n)&&i<=rmax;i++,c++) ans.push_back(matrix[i][cmax]);
            cmax--;
            for(int i=cmax;c<(m*n)&&i>=cmin;i--,c++) ans.push_back(matrix[rmax][i]);
            rmax--;
            for(int i=rmax;c<(m*n)&&i>=rmin;i--,c++) ans.push_back(matrix[i][cmin]);
            cmin++;
        }
        return ans;
    }
};