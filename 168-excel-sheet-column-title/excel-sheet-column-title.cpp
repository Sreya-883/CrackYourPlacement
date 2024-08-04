class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber>0){
            char ch = char(ceil((columnNumber-1)%26 + 'A'));
            ans = ch+ans;
            columnNumber = (columnNumber-1)/26;
        }
        return ans;
    }
};