class Solution {
   public:
    int hammingWeight(uint32_t n) {
        size_t bit_count = 0;
        for (size_t i = 0; i < 32; ++i) {
            if (n & 1) bit_count++;
            n >>= 1;
        }
        return bit_count;
    }
};
