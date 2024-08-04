class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i=a.size()-1,j=b.size()-1;
        int rem=0;
        while(i>=0&&j>=0){
            if(a[i]=='1'&&b[j]=='1'){
                if(rem) ans+='1';
                else ans+='0',rem=1;
            }else if(a[i]=='1'||b[j]=='1'){
                if(rem) ans+='0';
                else ans+='1';
            }else{
                if(rem) ans+='1',rem=0;
                else ans+='0';
            }
            i--;j--;
        }
        while(i>=0){
            if(a[i]=='1'){
                if(rem) ans+='0';
                else ans+='1';
            }else{
                if(rem) ans+='1',rem=0;
                else ans+='0';
            }
            i--;
        }
        while(j>=0){
            if(b[j]=='1'){
                if(rem) ans+='0';
                else ans+='1';
            }else{
                if(rem) ans+='1',rem=0;
                else ans+='0';
            }
            j--;
        }
        if(rem) ans+='1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};