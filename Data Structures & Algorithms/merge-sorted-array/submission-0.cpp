class Solution {
   public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = 0, p2 = 0;
        while (p1 < m && p2 < n) {
            if (nums1[p1] > nums2[p2]) {
                rotate(nums1.begin() + p1, nums1.begin() + m, nums1.begin() + ++m);
                nums1[p1] = nums2[p2];
                p2++;
            }
            p1++;
        }
        copy(nums2.begin() + p2, nums2.end(), nums1.begin() + p1);
    }
};