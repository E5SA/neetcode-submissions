class KthLargest {
   public:
    multiset<int, greater<int>> numbers;
    int k;

    KthLargest(int k, std::vector<int>& nums) : numbers(nums.begin(), nums.end()), k(k) {}

    int add(int val) {
        numbers.insert(val);
        size_t i = 1;
        auto it = numbers.begin();
        while (i < k) {
            it++;
            i++;
        }
        return *it;
    }
};
