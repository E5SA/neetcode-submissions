class Solution {
   public:
    bool isPalindrome(string s) {
        erase_if(s, [](unsigned char c) { return !isalnum(c); });

        size_t i = 0;
        for (unsigned char c : s) {
            if (c == ' ') continue;

            if (c >= 'A' && c <= 'Z') c += 'a' - 'A';

            s[i++] = (static_cast<char>(c));
        }
        s.resize(i);

        string reversed_string = s;
        reverse(reversed_string.begin(), reversed_string.end());

        if (s == reversed_string) return true;
        return false;
    }
};
