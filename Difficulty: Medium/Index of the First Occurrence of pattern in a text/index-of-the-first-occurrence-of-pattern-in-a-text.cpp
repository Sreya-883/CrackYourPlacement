//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMatching(string text, string pat) {
        // Code here
        int i=0,n=text.size(),m=pat.size();
        for(int i=0;i<n;i++){
            if(text[i]==pat[0]){
                int tempi=i,tempj=0;
                for( ;tempj<m&&tempi<n&&text[tempi]==pat[tempj];tempj++,tempi++);
                if(tempj==m) return i;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string text, pat;
        cin >> text >> pat;
        Solution obj;
        cout << obj.findMatching(text, pat) << endl;
    }
    return 0;
}
// } Driver Code Ends