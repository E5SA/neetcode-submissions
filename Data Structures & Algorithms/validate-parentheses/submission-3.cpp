class Solution {
   public:
    bool isValid(string s) {
        vector<char> brackets;
        for (char c : s) {
            switch (c) {
                case '(':
                case '{':
                case '[':
                    brackets.push_back(c);
                    break;
                case ')': {
                    if (brackets.empty() || brackets[brackets.size() - 1] != '(') return false;
                    brackets.pop_back();
                    break;
                }
                case '}': {
                    if (brackets.empty() || brackets[brackets.size() - 1] != '{') return false;
                    brackets.pop_back();
                    break;
                }
                case ']': {
                    if (brackets.empty() || brackets[brackets.size() - 1] != '[') return false;
                    brackets.pop_back();
                    break;
                }

                default:
                    break;
            }
        }
        if (!brackets.empty()) return false;
        return true;
    }
};
