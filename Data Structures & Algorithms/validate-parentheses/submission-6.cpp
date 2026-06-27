class Solution {
   public:
    bool isValid(string s) {
        size_t index = 0;
        while (index < s.length()) {
            if (s[index] == ')' || s[index] == ']' || s[index] == '}') {
                if (index == 0) return false;
                if (s[index] == ')' && s[index - 1] != '(') return false;
                if (s[index] == ']' && s[index - 1] != '[') return false;
                if (s[index] == '}' && s[index - 1] != '{') return false;
                s.erase(index - 1, 2);
                index--;
            } else
                index++;
        }
        if (!s.empty()) return false;
        return true;
    }
};
