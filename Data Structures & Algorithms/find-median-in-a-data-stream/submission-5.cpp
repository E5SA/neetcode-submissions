class MedianFinder {
   public:
    priority_queue<int> lower;
    priority_queue<int, vector<int>, greater<int>> upper;
    MedianFinder() {}

    void addNum(int num) {
        if (lower.empty() || num <= lower.top())
            lower.push(num);
        else
            upper.push(num);
        if (lower.size() > upper.size() + 1) {
            upper.push(lower.top());
            lower.pop();
        } else if (upper.size() > lower.size()) {
            lower.push(upper.top());
            upper.pop();
        }
    }

    double findMedian() {
        return ((lower.size() + upper.size()) & 1) ? static_cast<double>(lower.top())
                                                   : (lower.top() + upper.top()) / 2.0;
    }
};
