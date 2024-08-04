class Solution {
public:
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j&&s[i]==s[j]){i++;j--;}
        if(i>=j) return true;
        int i1=i,j1=j;
        i++;
        while(i<j&&s[i]==s[j]){i++;j--;}
        if(i>=j) return true;
        i=i1;j=j1-1;
        while(i<j&&s[i]==s[j]){i++;j--;}
        if(i>=j) return true;
        return false;
    }
};