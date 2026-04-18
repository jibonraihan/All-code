#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int *arr;
    int top;
    int size;

public:
    Stack(int n)
    {
        arr = new int[n];
        top = -1;
        size = n;
    }
    void push(int val)
    {
        if (top < size - 1)
        {
            top++;
            arr[top] = val;
        }
    }
    int pop()
    {
        if (top >= 0)
            return arr[top--];
        return -1;
    }
    bool empty()
    {
        return top == -1;
    }
    void clean()
    {
        delete[] arr;
    }
};

class Queue
{
    int *arr;
    int front;
    int last;
    int size;

public:
    Queue(int n)
    {
        arr = new int[n];
        front = 0;
        last = 0;
        size = n;
    }
    void en_qe(int val)
    {
        if (last < size)
        {
            arr[last++] = val;
        }
    }
    int de_qe()
    {
        if (front < last)
            return arr[front++];
        return -1;
    }
    bool empty()
    {
        return front == last;
    }
};

int main()
{
    int N, M;
    cin >> N >> M;

    if (N != M)
    {
        cout << "NO" << endl;
        return 0;
    }

    Stack stack(N);
    Queue qe(M);

    for (int i = 0; i < N; i++)
    {
        int value;
        cin >> value;
        stack.push(value);
    }

    for (int i = 0; i < M; i++)
    {
        int val;
        cin >> val;
        qe.en_qe(val);
    }

    int flag = 1;
    while (!stack.empty() && !qe.empty())
    {
        if (stack.pop() != qe.de_qe())
        {
            flag = 0;
            break;
        }
    }

    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}