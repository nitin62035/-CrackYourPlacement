class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        // Step 1: Preprocess to find all the indices of x in nums
        vector<int> occurrence_indices;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == x) {
                occurrence_indices.push_back(i);
            }
        }
        
        // Step 2: Process each query
        vector<int> result;
        for (int query : queries) {
            if (query <= occurrence_indices.size()) {
                result.push_back(occurrence_indices[query - 1]);
            } else {
                result.push_back(-1);
            }
        }
        
        return result;
    }
};