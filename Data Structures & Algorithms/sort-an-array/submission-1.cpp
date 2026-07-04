class Solution {
   public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.size() == 1) return nums;
        if (nums.size() == 2) {
            if (nums[0] > nums[1]) swap(nums[0], nums[1]);
            return nums;
        }

        int middle = nums.size() / 2;
        vector<int> left(nums.begin(), nums.begin() + middle);
        vector<int> right(nums.begin() + middle, nums.end());
        sortArray(left);
        sortArray(right);
        int pl = 0, pr = 0, pn = 0;
        while (pl < left.size() && pr < right.size()) {
            if (left[pl] <= right[pr]) {
                nums[pn] = left[pl];
                pl++;
            } else {
                nums[pn] = right[pr];
                pr++;
            }
            pn++;
        }
        copy(left.begin() + pl, left.end(), nums.begin() + pn);
        copy(right.begin() + pr, right.end(), nums.begin() + pn);

        return nums;
    }
};