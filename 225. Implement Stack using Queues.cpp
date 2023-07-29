class MyStack {
public:
    
    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int size = q.size();
    while (size > 1) {
        int frontElement = q.front();
        q.pop();
        q.push(frontElement);
        size--;
    }
    int topElement = q.front();
    q.pop();
    return topElement;
    }
    
    int top() {
        return q.back();

    }
    
    bool empty() {
        return q.empty();
    }
};