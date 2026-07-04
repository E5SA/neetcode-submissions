class Solution {
   public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
        vector<int> sorted;
        while (!pq.empty()) {
            sorted.push_back(pq.top());
            pq.pop();
        }
        return sorted;
    }
};