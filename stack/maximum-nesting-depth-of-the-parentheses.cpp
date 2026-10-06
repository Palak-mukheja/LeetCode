class Solution {
public:
    int maxDepth(string s) {
        int depth=0;
        int maxDepth=0;
        for (int i=0; i<s.length();i++){
            if (s[i]=='('){
                depth++;
                 if (maxDepth<depth){
                    maxDepth=depth;
                }
            }
           else if(s[i]==')'){
                    depth-=1;
                }
        }
            
        
        return maxDepth;
    }
};
