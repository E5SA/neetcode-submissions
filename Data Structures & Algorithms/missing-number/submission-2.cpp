class Solution {
   public:
    int missingNumber(vector<int>& nums) {
        long long expected = (nums.size() + 1) * (nums.size()) / 2;
        long long actual = accumulate(nums.begin(), nums.end(), 0);
        return expected - actual;
    }
};
