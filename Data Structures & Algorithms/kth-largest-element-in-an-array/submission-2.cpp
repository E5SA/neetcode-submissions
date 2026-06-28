class Solution {
   public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> numbers;
        size_t i = 0;
        while (numbers.size() < k && i < nums.size()) {
            numbers.push(nums[i]);
            i++;
        }
        while (i < nums.size()) {
            if (nums[i] > numbers.top()) {
                numbers.push(nums[i]);
                numbers.pop();
            }
            i++;
        }
        return numbers.top();
    }
};
