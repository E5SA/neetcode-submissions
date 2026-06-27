class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        size_t max_length = 0, substr_start_pos = 0;
        for (size_t substr_end_pos = 0; substr_end_pos < s.length(); substr_end_pos++)
        {
            auto [it, success] = seen.insert(s[substr_end_pos]);
            if (!success)
            {
                while (s[substr_start_pos] != s[substr_end_pos])
                {
                    seen.erase(s[substr_start_pos++]);
                }
                substr_start_pos++;
            }
            max_length = max(substr_end_pos - substr_start_pos + 1, max_length);
        }
        return max_length;
    }
};
