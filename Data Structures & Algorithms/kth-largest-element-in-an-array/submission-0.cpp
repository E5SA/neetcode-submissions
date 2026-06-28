class Solution {
   public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> numbers(nums.begin(), nums.end());
        for (size_t i = 0; i < k - 1; i++) numbers.pop();
        return numbers.top();
    }
};
