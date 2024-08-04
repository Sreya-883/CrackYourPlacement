class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int c=0;string ans="";
        while(c<strs[0].length()){
            char ch=strs[0][c];
            for(string s:strs){
                if(c>=s.size()||ch!=s[c]) return ans;
            }
            ans+=ch;
            c++;
        }
        return ans;
    }
};