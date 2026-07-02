class Solution {
   public:
    void reverseString(vector<char>& s) {
        size_t left = 0, right = s.size() - 1;
        while (left < right) {
            swap(s[left], s[right]);
            left++, right--;
        }
    }
};