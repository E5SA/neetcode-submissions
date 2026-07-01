class Solution {
   public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sorted_array;
        size_t index_1 = 0, index_2 = 0;
        while (index_1 < nums1.size() && index_2 < nums2.size()) {
            if (nums1[index_1] <= nums2[index_2]) {
                sorted_array.push_back(nums1[index_1]);
                index_1++;
            } else {
                sorted_array.push_back(nums2[index_2]);
                index_2++;
            }
        }
        if (index_1 == nums1.size())
            sorted_array.insert(sorted_array.end(), nums2.begin() + index_2, nums2.end());
        else
            sorted_array.insert(sorted_array.end(), nums1.begin() + index_1, nums1.end());

        if (sorted_array.size() % 2 == 1)
            return sorted_array[sorted_array.size() / 2];
        else {
            size_t middle = sorted_array.size() / 2;
            double average = (sorted_array[middle] + sorted_array[middle - 1]) / 2.0;
            return average;
        }
    }
};
