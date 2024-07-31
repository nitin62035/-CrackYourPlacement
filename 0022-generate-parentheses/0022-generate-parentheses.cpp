
class Solution {
public:
    void generateP(int open,int close,string str1,vector<string>& paranthesis){
    
    if(close==0 && open==0){
        paranthesis.push_back(str1);
        return;
    }
    if(open>0) generateP(open-1,close,str1+"(",paranthesis);
    if(close>open) generateP(open,close-1,str1+")",paranthesis);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> paranthesis;
        
        generateP(n,n,"",paranthesis);
        return paranthesis;
    }
};