class Solution {
   public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merged_array(m + n);

        int p1 = 0, p2 = 0, pm = 0;
        while (p1 < m && p2 < n) {
            if (nums1[p1] <= nums2[p2]) {
                merged_array[pm] = nums1[p1];
                p1++;
            } else {
                merged_array[pm] = nums2[p2];
                p2++;
            }
            pm++;
        }
        copy(nums1.begin() + p1, nums1.begin() + m, merged_array.begin() + pm);
        copy(nums2.begin() + p2, nums2.end(), merged_array.begin() + pm);
        nums1 = merged_array;
    }
};