class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int b=0;
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            
                if(a[i]==a[i+1]){
                    b=a[i];
                    break;
                }
            
        }
        return b;
    }
};