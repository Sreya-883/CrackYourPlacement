class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(string s:strs){
            string s1=s;
            sort(s1.begin(),s1.end());
            mp[s1].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto x:mp) ans.push_back(x.second);
        return ans;
    }
};