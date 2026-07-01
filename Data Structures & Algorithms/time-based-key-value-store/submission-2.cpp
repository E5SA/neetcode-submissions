class TimeMap {
   public:
    map<pair<string, int>, string> keys;
    TimeMap() {}

    void set(string key, string value, int timestamp) { keys[{key, timestamp}] = value; }

    string get(string key, int timestamp) {
        while (keys[{key, timestamp}].empty() && timestamp != 0) timestamp--;
        return keys[{key, timestamp}];
    }
};