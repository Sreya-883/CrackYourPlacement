class Solution {
public:
    int strStr(string haystack, string needle) {
        int c=0,n=needle.size();
        for(int i=0;i<haystack.size();i++){
            c=0;
            if(haystack[i]==needle[c]){
                int j=i;
                while(j<haystack.size()&&c<n&&haystack[j]==needle[c]){
                    j++;c++;
                }
                if(c==n) return i;
            }
        }
        return -1;
    }
};