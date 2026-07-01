class MedianFinder {
   public:
    multiset<int> numbers;
    MedianFinder() {}

    void addNum(int num) { numbers.insert(num); }

    double findMedian() {
        auto median_index = numbers.begin();
        advance(median_index, numbers.size() / 2);
        if (numbers.size() % 2 != 0)

            return static_cast<double>(*median_index);

        else
            return static_cast<double>(*median_index + *prev(median_index)) / 2.0;
    }
};
