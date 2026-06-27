class MinStack {
   private:
    int *stack, size, capacity;

    void resize(int new_capacity) {
        if (new_capacity < 1) new_capacity = 1;

        int* new_stack = new int[new_capacity];

        for (size_t i = 0; i < size; i++) new_stack[i] = stack[i];

        delete[] stack;
        stack = new_stack;
        capacity = new_capacity;
    }

   public:
    MinStack() {
        size = 0;
        capacity = 0;
        stack = new int[capacity];
    }

    void push(int val) {
        if (size >= capacity) resize(capacity * 2);

        new (stack + size) int(val);
        size++;
    }

    void pop() {
        size--;
        if (size < capacity / 2) resize(capacity / 2);
    }

    int top() { return stack[size - 1]; }

    int getMin() { return *min_element(stack, stack + size); }
};
