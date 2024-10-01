// https://www.naukri.com/code360/problems/reversing-a-queue_982934



#include <bits/stdc++.h>
queue<int> reverseQueue(queue<int> q)
{
    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    return q;
}
