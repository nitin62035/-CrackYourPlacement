class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) {
            return "0";
        }
        string s;
        bool isNegative = false;
        if (num < 0) {
            isNegative = true;
            num = -num;
        }
        while (num != 0) {
            int rem = num % 7;
            s = to_string(rem) + s; 
            num /= 7;
        }
        if (isNegative) {
            s = "-" + s; 
        }
        return s;
    }
};