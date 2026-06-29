class Solution {
   public:
    int hammingWeight(uint32_t n) {
        size_t bit_count = 0;
        for (size_t i = 0; i < 32; ++i) {
            if ((n >> i) & 1) bit_count++;
        }
        return bit_count;
    }
};
