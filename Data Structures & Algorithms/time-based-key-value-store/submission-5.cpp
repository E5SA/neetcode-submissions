class TimeMap {
   public:
    unordered_map<string, vector<pair<string, int>>> keys;
    TimeMap() {}

    void set(string key, string value, int timestamp) { keys[key].push_back({value, timestamp}); }

    string get(string key, int timestamp) {
        string value = "";
        int left = 0, right = keys[key].size() - 1;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (keys[key][middle].second <= timestamp) {
                value = keys[key][middle].first;
                left = middle + 1;
            } else {
                right = middle - 1;
            }
        }
        return value;
    }
};
