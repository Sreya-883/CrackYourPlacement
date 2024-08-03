class Solution {
public:
    bool exist(vector<vector<char>>& board, string &word) {
        int m=board.size(),n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    if(word.length()==1) return true;
                    if(check(board,word,i,j,m,n,0)) return true;
                }
            }
        }
        return false;
    }
    bool check(vector<vector<char>>& board, string &word,int i,int j,int m,int n,int idx){
        if(idx==word.length()) return true;
        if(i<0||i>=m||j<0||j>=n||idx>word.length()||word[idx]!=board[i][j]) return false;
        char c=board[i][j];
        board[i][j]='.';
        bool ans= (check(board,word,i+1,j,m,n,idx+1)|check(board,word,i-1,j,m,n,idx+1)|check(board,word,i,j+1,m,n,idx+1)|check(board,word,i,j-1,m,n,idx+1));
        board[i][j]=c;
        return ans;
    }
};
