class Solution {
public:
    vector<string>ans;
    void genValidPar(int o,int c,string s,int n){
        if(o==n&&c==n){
            ans.push_back(s);
            return;
        }
        if(o<n){
            genValidPar(o+1,c,s+"(",n);
        }
        if(c<o){
            genValidPar(o,c+1,s+")",n);
        }
    }
    vector<string> generateParenthesis(int n) {
        genValidPar(0,0,"",n);
        return ans;
    }
};