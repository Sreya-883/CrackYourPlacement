class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>row(rowIndex+1);
        row[0]=1;
        for(int i=1;i<rowIndex+1;i++){
            row[i]=row[i-1]*1LL*(rowIndex-i+1)/i;
        }
        return row;
    }
};