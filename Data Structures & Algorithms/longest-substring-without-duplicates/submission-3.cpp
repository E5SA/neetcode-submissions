class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        size_t max_length = 0;
        string substr;
        for (char c : s) {
            auto [it, success] = seen.insert(c);
            substr.push_back(c);

            if (!success) {
                substr.erase(0, substr.find(c) + 1);
                seen.clear();
                for (char cs : substr) seen.insert(cs);
            }

            max_length = max(substr.length(), max_length);
        }
        return max_length;
    }
};
