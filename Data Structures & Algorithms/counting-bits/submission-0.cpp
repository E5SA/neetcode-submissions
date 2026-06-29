class Solution {
   public:
    int count_individual(size_t& n) {
        size_t count = 0;
        for (size_t i = 0; i < 10; ++i) {
            if ((n >> i) & 1) count++;
        }
        return count;
    }

    vector<int> countBits(int n) {
        vector<int> result;
        for (size_t i = 0; i <= n; ++i) result.push_back(count_individual(i));
        return result;
    }
};
