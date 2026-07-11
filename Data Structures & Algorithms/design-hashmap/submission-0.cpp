class MyHashMap {
   private:
    array<int, 1000001> elements;

   public:
    MyHashMap() { elements.fill(-1); }

    void put(int key, int value) { elements[key] = value; }

    int get(int key) { return elements[key]; }

    void remove(int key) { elements[key] = -1; }
};