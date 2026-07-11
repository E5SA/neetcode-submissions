class Node {
   public:
    Node* next;
    int data;
};

class MyQueue {
    Node* first;
    Node* last;

   public:
    MyQueue() { first = nullptr, last = nullptr; }

    void push(int x) {
        Node* new_node = new Node();

        new_node->data = x;
        new_node->next = nullptr;

        if (first == nullptr)
            first = new_node;

        else
            last->next = new_node;

        last = new_node;
    }

    int pop() {
        int result = first->data;
        Node* del_node = first;
        first = first->next;
        delete del_node;

        return result;
    }

    int peek() { return first->data; }

    bool empty() { return first == nullptr; }
};