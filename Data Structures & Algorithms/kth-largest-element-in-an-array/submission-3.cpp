class Solution {
   public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> numbers;
        for (int num : nums) {
            numbers.push(num);
            if (numbers.size() > k) numbers.pop();
        }
        return numbers.top();
    }
};
