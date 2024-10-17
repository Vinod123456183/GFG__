
class Solution
{
    public:
    string concatenatedString(string s1, string s2) 
    { 
        set<char> set1(s1.begin(), s1.end());
        set<char> set2(s2.begin(), s2.end());
    
        string ans;
        
        for(int i=0;i<s1.size();i++){
            if(set2.find(s1[i]) == set2.end())
                ans += s1[i];
        }
        for(int i=0;i<s2.size();i++){
            if(set1.find(s2[i]) == set1.end())
                ans += s2[i];
        }
        
        if(ans == "")
            return "-1";
    
        return ans;
    }

};
