class Solution {
   public:
    unordered_set<int> seen;

    bool isHappy(int n) {
        int squares_sum = 0;
        while (n > 0) {
            int digit = n % 10;
            squares_sum += digit * digit;
            n /= 10;
        }
        if (squares_sum == 1) return true;
        if (seen.contains(squares_sum)) return false;
        seen.insert(squares_sum);
        return isHappy(squares_sum);
    }
};
