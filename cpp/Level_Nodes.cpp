#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    int value;
    myStack *left;
    myStack *right;
    myStack(int val)
    {
        this->value = val;
        this->left = NULL;
        this->right = NULL;
    }
};
myStack *input()
{
    int n;
    cin >> n;
    myStack *root = new myStack(n);
    queue<myStack *> qn;
    qn.push(root);
    while (!qn.empty())
    {
        myStack *fnt = qn.front();
        qn.pop();

        int left, right;
        cin >> left >> right;
        myStack *newleft = NULL;
        myStack *newright = NULL;
        if (left != -1)
            newleft = new myStack(left);
        if (right != -1)
            newright = new myStack(right);
        fnt->left = newleft;
        fnt->right = newright;

        if (fnt->left)
            qn.push(fnt->left);
        if (fnt->right)
            qn.push(fnt->right);
    }
    return root;
}

void count_level(myStack *root)
{
    int n;
    cin >> n;
    if (!root)
    {
        cout << 0;
        return;
    }

    queue<myStack *> qn;
    qn.push(root);
    int levels = 0;
    while (!qn.empty())
    {
        int size = qn.size();
        for (int i = 0; i < size; i++)
        {
            myStack *fnt = qn.front();
            qn.pop();
            if (levels == n)
                cout << fnt->value << " ";
            if (fnt->left)
                qn.push(fnt->left);
            if (fnt->right)
                qn.push(fnt->right);
        }
        levels++;
    }
    if (n >= levels)
        cout << "Invalid";
}

int main()
{
    myStack *root;
    root = input();
    count_level(root);
    return 0;
}