//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long int solve(string &s, int k){
        if(k<0) return 0;
        int freq[26]={0},uniq=0;
        int l=0,r=0,n=s.size();long long int ans=0;
        while(r<n){
            freq[s[r]-'a']++;
            if(freq[s[r]-'a']==1) uniq++;
            while(l<n&&uniq>k){
                freq[s[l]-'a']--;
                if(freq[s[l]-'a']==0) uniq--;
                l++;
            }
            ans+=(r-l+1);
            r++;
        }
        return ans;
    }
    long long int substrCount (string s, int k) {
    	//code here.
    	return solve(s,k)-solve(s,k-1);
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends