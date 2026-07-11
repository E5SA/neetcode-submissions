class MyStack {
    queue<int> elements;

   public:
    MyStack() {}

    void push(int x) {
        queue<int> temp;
        while (!elements.empty()) {
            temp.push(elements.front());
            elements.pop();
        }
        elements.push(x);
        while (!temp.empty()) {
            elements.push(temp.front());
            temp.pop();
        }
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