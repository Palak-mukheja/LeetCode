class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int currentvalue=0;
        long long num=0;
        int sign=1;
       
            while (i<s.length() && s[i]==' '){
                i++;
            }
                if (i == s.length()) {
              return 0;
            }
            if (s[i]=='-'){
                sign=-1;
                i++;
            }
            else if(s[i]=='+'){
                sign=1;
                i++;
            }
            else {
                sign=1;
            }

            while (i<s.length() && isdigit(s[i])){
                num=num*10+(s[i]-'0');

                if (sign == 1 && num > INT_MAX) {
                return INT_MAX;
            }

            if (sign == -1 && -num < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return sign * num;
    }
};