class MyStack {
    queue<int> elements;

   public:
    MyStack() {}

    void push(int x) {
        queue<int> temp;
        temp.push(x);
        while (!elements.empty()) {
            temp.push(elements.front());
            elements.pop();
        }
        swap(temp, elements);
    }

    int pop() {
        int top = elements.front();
        elements.pop();
        return top;
    }

    int top() { return elements.front(); }

    bool empty() { return elements.empty(); }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */