class Solution {
   public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> indices;
        for (int i = 0; i < nums.size(); i++) indices[nums[i]].push_back(i);

        for (auto& [num, pos] : indices) {
            if (pos.size() >= 2) {
                sort(pos.begin(), pos.end());

                for (int i = 1; i < pos.size(); ++i) {
                    if (pos[i] - pos[i - 1] <= k) return true;
                }
            }
        }
        return false;
    }
};