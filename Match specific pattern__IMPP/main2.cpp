

string code(string s){
    int n=s.size();
    string ans="";
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
        ans+=to_string(mp[s[i]]);
    }
    return ans;
}
vector<string> findMatchedWords(vector<string> dict,string pattern)
{
       //Your code here
       vector<string> v;
       string pat=code(pattern);
       for(int i=0;i<dict.size();i++){
           if(pat==code(dict[i])){
               v.push_back(dict[i]);
           }
       }
       return v;
}
