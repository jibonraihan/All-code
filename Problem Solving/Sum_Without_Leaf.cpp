#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    int value;
    myStack *left;
    myStack *right;
    myStack(int value)
    {
        this->value = value;
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
int sumx = 0;
int sum(myStack *root)
{
    queue<myStack *> q;
    q.push(root);
    while (!q.empty())
    {
        myStack *fnt = q.front();
        q.pop();
        if (fnt == NULL)
        {
            return 0;
        }
        if (fnt->left == NULL && fnt->right == NULL)
        {
            return 0;
        }
        sum(fnt->left);
        sum(fnt->right);
        sumx += fnt->value;
    }
    return sumx;
}
int main()
{
    myStack *root;
    root = input();
    int x = sum(root);
    cout << x;
    return 0;
}