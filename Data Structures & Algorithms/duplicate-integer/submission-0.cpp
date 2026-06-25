class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> input(nums.begin(), nums.end());
        if (nums.size() == input.size()) {
            return false;
        } return true;
    }
};