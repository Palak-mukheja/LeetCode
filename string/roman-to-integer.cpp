class Solution {
public:
    int romanToInt(string s) {
        int output=0;
        int currentValue=0;
       map<char,int> roman={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
      for (int i=0; i<s.length()-1; i++){
        currentValue=roman[s[i]];
        if (roman[s[i]]<roman[s[i+1]]){
            output-=currentValue;
        }
        else {
            output+=currentValue;
        }
      }
        currentValue = roman[s[s.length() - 1]];
         output+=currentValue;
      return output;
    }
       
};
