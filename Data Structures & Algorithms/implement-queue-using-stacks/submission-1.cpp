class MyQueue {
    stack<int> elements;

   public:
    MyQueue() {}

    void push(int x) {
        stack<int> temp;
        while (!elements.empty()) {
            temp.push(elements.top());
            elements.pop();
        }
        elements.push(x);
        while (!temp.empty()) {
            elements.push(temp.top());
            temp.pop();
        }
    }

    int pop() {
        int front = elements.top();
        elements.pop();
        return front;
    }

    int peek() { return elements.top(); }

    bool empty() { return elements.empty(); }
};