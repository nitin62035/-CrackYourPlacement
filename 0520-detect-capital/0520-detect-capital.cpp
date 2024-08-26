class Solution {
public:
    bool detectCapitalUse(string word) {
        int f1 = 0; 
        int c = 0; 
        for (int i = 0; i < word.size(); i++) {
            if (isupper(word[0])) {
                f1 = 1;
            }
            if (isupper(word[i])) {
                c++;
            }
        }
        if (c == word.size() || c == 0 || (f1 == 1 && c == 1)) {
            return true;
        }
        return false;
    }
};