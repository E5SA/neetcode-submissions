class Solution {
   public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (num > 0) seen.insert(num);
        }
        priority_queue<int, vector<int>, greater<int>> pq(seen.begin(), seen.end());

        int result = 1;
        while (!pq.empty()) {
            if (result != pq.top()) return result;
            pq.pop();
            result++;
        }
        return result;
    }
};