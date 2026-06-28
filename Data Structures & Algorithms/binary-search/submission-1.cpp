class Solution {
   public:
    int search(vector<int>& nums, int target) {
        if (!ranges::contains(nums, target)) return -1;

        size_t left = 0, right = nums.size() - 1;
        while (right - left > 1) {
            size_t middle = (left + right) / 2;
            if (nums[middle] == target) return middle;
            if (nums[middle] > target)
                right = middle;
            else
                left = middle;
        }
        return (nums[left] == target) ? left : right;
    }
};
