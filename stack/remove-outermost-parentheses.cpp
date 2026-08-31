class Solution {
public:
    string removeOuterParentheses(string s) {
        int balance=0;
        string ans="";
        for (int i=0; i<s.length(); i++){
            if (s[i]=='('){
                if (balance!=0){
                    ans.push_back(s[i]);
                }
                balance++;
            }
            else {
                balance--;
                if (balance!=0){
                    ans.push_back(s[i]);
                }
            }
        }
        return ans;
    }
};