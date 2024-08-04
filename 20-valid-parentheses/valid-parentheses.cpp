class Solution {
public:
    bool isValid(string s) {
      stack<char>st;
      for(char ch:s){
        if(ch=='('||ch=='{'||ch=='[') st.push(ch);
        else{
            if(st.empty()) return false;
            char ch1=st.top();st.pop();
            if((ch1=='('&&ch!=')')||(ch1=='{'&&ch!='}')||(ch1=='['&&ch!=']')) return false;
        }
      }
      return st.empty();  
    }
};