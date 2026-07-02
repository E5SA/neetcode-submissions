class Solution {
   public:
    bool isPalindrome(string s) {
        if (all_of(s.begin(), s.end(), [](unsigned char ch) { return !isalnum(ch); })) return true;

        int left = 0, right = s.length() - 1;
        while (left < right) {
            while (!isalnum(s[left])) left++;
            while (!isalnum(s[right])) right--;

            if (tolower(s[left]) != tolower(s[right])) return false;
            left++, right--;
        }
        return true;
    }
};
