class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        map<char, char> mp;
        set<char> used;

        for (int i = 0; i < s.length(); i++) {
            
            if (mp.count(s[i]) == 1) {
                
                // s[i] was already mapped
                if (mp[s[i]] != t[i]) {
                    return false;
                }
                
            } else {
                
                // t[i] is already mapped to another character
                if (used.count(t[i]) == 1) {
                    return false;
                }
                
                // create new mapping
                mp[s[i]] = t[i];
                used.insert(t[i]);
            }
        }

        return true;
    }
};