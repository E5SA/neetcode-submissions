class Solution {
   public:
    int findKthLargest(vector<int>& nums, int k) {
        auto split = nums.end() - (k - 1);
        nth_element(nums.begin(), split, nums.end());
        nums.erase(split, nums.end());

        return *max_element(nums.begin(), nums.end());
    }
};
