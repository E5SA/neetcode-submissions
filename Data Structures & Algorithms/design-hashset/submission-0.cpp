class MyHashSet {
   public:
    vector<int> elements;

    MyHashSet() {}

    void add(int key) {
        if (!ranges::contains(elements, key)) elements.push_back(key);
    }

    void remove(int key) {
        auto it = find(elements.begin(), elements.end(), key);

        if (it != elements.end()) {
            int index = distance(elements.begin(), it);
            elements.erase(elements.begin() + index);
        }
    }

    bool contains(int key) {
        if (ranges::contains(elements, key)) return true;

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */