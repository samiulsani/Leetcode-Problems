// https://leetcode.com/problems/implement-queue-using-stacks/description/

class MyQueue
{
public:
    stack<int> st;
    MyQueue() {}

    void push(int x) { st.push(x); }

    int pop()
    {
        stack<int> newstack;
        int last;
        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                last = k;
                break;
            }
            newstack.push(k);
        }
        while (!newstack.empty())
        {
            st.push(newstack.top());
            newstack.pop();
        }
        return last;
    }

    int peek()
    {
        stack<int> newstack;
        int last;
        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                last = k;
            }
            newstack.push(k);
        }
        while (!newstack.empty())
        {
            st.push(newstack.top());
            newstack.pop();
        }
        return last;
    }

    bool empty() { return st.empty(); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */