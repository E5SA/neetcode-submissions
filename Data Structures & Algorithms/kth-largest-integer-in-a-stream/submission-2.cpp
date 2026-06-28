class KthLargest {
   public:
    priority_queue<int, vector<int>, greater<int>> numbers;
    int k;

    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        size_t i = 0;
        while (i < nums.size() && numbers.size() < k) {
            numbers.push(nums[i]);
            i++;
        }
        while (i < nums.size()) {
            if (nums[i] > numbers.top()) {
                numbers.push(nums[i]);
                numbers.pop();
            }
            i++;
        }
    }

    int add(int val) {
        if (numbers.size() < k)
            numbers.push(val);
        else {
            if (val > numbers.top()) {
                numbers.push(val);
                numbers.pop();
            }
        }
        return numbers.top();
    }
};
