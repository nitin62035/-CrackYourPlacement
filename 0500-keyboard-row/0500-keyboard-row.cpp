class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>ans;
        string s1="QWERTYUIOPqwertyuiop";
        string s2="ASDFGHJKLasdfghjkl";
        string s3="ZXCVBNMzxcvbnm";
        for(auto i:words){
            string temp=i;
            int cnt=0;
            for(int i=0;i<temp.size();i++){
                for(int j=0;j<s1.size();j++){
                    if(temp[i]==s1[j]){
                        cnt++;
                        break;
                    }
                }
            }
            if(cnt==temp.size())ans.push_back(temp);
            int cnt2=0;
            for(int i=0;i<temp.size();i++){
                for(int j=0;j<s2.size();j++){
                    if(temp[i]==s2[j]){
                        cnt2++;
                        break;
                    }
                }
            }
            if(cnt2==temp.size())ans.push_back(temp);
            int cnt3=0;
            for(int i=0;i<temp.size();i++){
                for(int j=0;j<s3.size();j++){
                    if(temp[i]==s3[j]){
                        cnt3++;
                        break;
                    }
                }
            }
            if(cnt3==temp.size())ans.push_back(temp);
        }
        return ans;
    }
};