class Solution {
   public:
    int reverse(int x) {
        string num = to_string(x);
        if (num[0] == '-') rotate(num.begin(), num.begin() + 1, num.end());

        std::reverse(num.begin(), num.end());
        try {
            return stoi(num);
        } catch (const exception& e) {
            return 0;
        }
    }
};
