class Solution {
   public:
    uint32_t reverseBits(uint32_t n) {
        size_t left = 0, right = 31;
        while (left < right) {
            unsigned int bit1 = (n >> left) & 1;
            unsigned int bit2 = (n >> right) & 1;

            if (bit1 ^ bit2) {
                unsigned int mask = (1U << left) | (1U << right);
                n ^= mask;
            }
            left++, right--;
        }
        return n;
    }
};
