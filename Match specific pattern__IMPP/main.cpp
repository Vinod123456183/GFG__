

bool F(const string& word, const string& pattern) {
    if (word.size() != pattern.size()) return false;

    unordered_map<char, char> pToW, wToP;

    for (int i = 0; i < pattern.size(); i++) {
        char pChar = pattern[i];
        char wChar = word[i];

        // Check the pattern to word mapping
        if (pToW.count(pChar) == 0) {
            pToW[pChar] = wChar;
        } else if (pToW[pChar] != wChar) {
            return false; // Mismatch in mapping
        }

        // Check the word to pattern mapping
        if (wToP.count(wChar) == 0) {
            wToP[wChar] = pChar;
        } else if (wToP[wChar] != pChar) {
            return false; // Mismatch in reverse mapping
        }
    }
    return true;
}


vector<string> findMatchedWords(int n, vector<string> dict, string pattern) {

    vector<string>ans;
    
    for(int i = 0 ; i < n ; i ++ )  {
        
        if(F(dict[i] , pattern))   {
            
            ans.push_back(dict[i] );
            
        }
        
        
    }

return ans;
    
