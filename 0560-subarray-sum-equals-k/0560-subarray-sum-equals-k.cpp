class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int frequency = 0, ans = 0; // frequency --> count store krne k liye... && ans --> sum store krne k liye...
        map<int, int> mapping; // ordered map...
        for(int i = 0; i < nums.size(); ++i){
            ans += nums[i]; // addition...
            if(ans == k){
                frequency++; // found one subarray...
            }
            if(mapping.find(ans - k) != mapping.end()){ //found...
                frequency += mapping[ans - k];
            }
            mapping[ans]++;
        }
        return frequency;
    }
};