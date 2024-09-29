class Solution {
public:
    long long solve(string &s,int k){
        if(k<0) return 0; 
        long long int ans=0;
        int n=s.size();
        int a=0,e=0,i=0,o=0,u=0;
        int k1=0;
        int l=0,r=0;
        for( ;r<n;r++){
           // cout<<k1<<" ";
            while(l<n&&(k1<k||!(a&&e&&i&&o&&u))){
                //cout<<"check";
                //cout<<(k1>k);
                if(s[l]=='a') a++;
                else if(s[l]=='e') e++;
                else if(s[l]=='i') i++;
                else if(s[l]=='o') o++;
                else if(s[l]=='u') u++;
                else k1++;
                l++;
            }
            //cout<<l<<" "<<r
            if(k<=k1&&a&&e&&i&&o&&u) ans+=(n-l+1);
            if(s[r]=='a') a--;
            else if(s[r]=='e') e--;
            else if(s[r]=='i') i--;
            else if(s[r]=='o') o--;
            else if(s[r]=='u') u--;
            else k1--;
        }
        return ans;
    }
    long long countOfSubstrings(string s, int k) {
        long long int ans=0;
        ans=solve(s,k)-solve(s,k+1);
        return ans;
    }
};