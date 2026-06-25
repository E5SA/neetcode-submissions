class Solution {
   public:
    bool isAnagram(string s, string t) {
        array<int, 26> letters{};
        for (char& c : s) {
            letters[c - 'a']++;
        }
        for (char& c : t) {
            letters[c - 'a']--;
        }
        if (any_of(letters.begin(), letters.end(), [](int x) { return x != 0; })) {
            return false;
        }
        return true;
    }
};
