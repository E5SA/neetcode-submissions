class Solution {
   public:
    double myPow(double x, int n) {
        double base = x, result = 1;
        for (size_t i = 0; i < abs(n); ++i) result *= (n >= 0) ? base : 1 / base;
        return result;
    }
};
