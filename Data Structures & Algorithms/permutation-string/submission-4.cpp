class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        array<int, 26> key{};
        array<int, 26> substring{};

        for (char c : s1) key[c - 'a']++;

        for (size_t i = 0; i < s1.length(); ++i) substring[s2[i] - 'a']++;

        size_t left = 0, right = s1.length() - 1;

        while (right <= s2.length() - 1) {
            if (key == substring) return true;

            substring[s2[left] - 'a']--;
            left++, right++;
            substring[s2[right] - 'a']++;
        }
        return false;
    }
};
