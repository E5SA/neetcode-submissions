class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total_product = reduce(nums.begin(), nums.end(), 1, multiplies<>());
        vector<int> products;
        for (size_t i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                int zero_product = 1;
                for (size_t j = 0; j < nums.size(); j++) {
                    if (j == i) {
                        continue;
                    }
                    zero_product *= nums[j];
                }
                products.push_back(zero_product);
            } else {
                products.push_back(total_product / nums[i]);
            }
        }
        return products;
    }
};
