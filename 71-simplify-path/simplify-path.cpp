class Solution {
public:
    string simplifyPath(string path) {
        vector<string>st;string s="";
        path+="/";
        for(int i=0;i<path.size();){
            if(path[i]=='/'&&s.size()){
                if(s==".."){
                    if(st.size()) 
                        st.pop_back();
                }
                else if(s!=".") 
                    st.push_back(s);
                s="";
                //cout<<s<<" ";
                while(path[i]=='/')i++;
            }else if(path[i]!='/'){
                s+=path[i];
                i++;
            }else{
                i++;
            }
        }
        string ans="";
        for(string s:st){
            ans+="/"+s;
        }
        if(ans.size()==0) ans="/";
        return ans;
    }
};