class Solution {
   public:
    int reverse(int x) {
        bool negative = false;
        if (x < 0) negative = true;
        string num = to_string(x);
        if (negative) rotate(num.begin(), num.begin() + 1, num.end());

        std::reverse(num.begin(), num.end());
        try {
            return stoi(num);
        } catch (const exception& e) {
            return 0;
        }
    }
};
