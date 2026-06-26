class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if (count(nums.begin(), nums.end(), 0) >= 2) {
            return vector<int>(nums.size(), 0);
        }

        int total_product = reduce(nums.begin(), nums.end(), 1, multiplies<>());
        vector<int> products;
        for (int num : nums) {
            if (num == 0) {
                int zero_product = 1;
                for (int x : nums) {
                    if (x != 0) zero_product *= x;
                }
                products.push_back(zero_product);
            } else {
                products.push_back(total_product / num);
            }
        }
        return products;
    }
};
