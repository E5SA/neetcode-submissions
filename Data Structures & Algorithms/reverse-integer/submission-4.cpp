class Solution {
   public:
    int reverse(int x) {
        int min = numeric_limits<int>::min() / 10, max = numeric_limits<int>::max() / 10, result = 0;
        while (x != 0)
        {
            int digit = x % 10;
            x /= 10;

            if (result > max || (result == max && digit > 7))
                return 0;
            if (result < min || (result == min && digit < -8))
                return 0;

            result *= 10;
            result += digit;
        }
        return result;
    }
};
