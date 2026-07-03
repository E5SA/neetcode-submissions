class Solution {
   public:
    int removeElement(vector<int>& nums, int val) {
        auto boundary =
            partition(nums.begin(), nums.end(), [val](const int& target) { return val != target; });
        return boundary - nums.begin();
    }
};