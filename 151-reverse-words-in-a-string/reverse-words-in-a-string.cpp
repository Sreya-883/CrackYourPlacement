class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int start=0,end=0,i=0,n=s.length();
        while(i<n){
            while(i<n&&s[i]==' ')i++;
            if(i<n){
                while(i<n&&s[i]!=' ') s[end++]=s[i++];
                reverse(s.begin()+start,s.begin()+end);
                s[end++]=' ';
                start=end;
                i++;
            }
        }
        s.resize(end-1);
        return s;
    }
};