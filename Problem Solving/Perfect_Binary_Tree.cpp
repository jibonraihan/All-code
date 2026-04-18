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
    queue<myStack *> q;
    q.push(root);
    while (!q.empty())
    {
        myStack *fnt = q.front();
        q.pop();

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
            q.push(fnt->left);
        if (fnt->right)
            q.push(fnt->right);
    }
    return root;
}
int find_node(myStack *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int left = find_node(root->left);
    int right = find_node(root->right);
    return left + right + 1;
}
int find_hight(myStack *root)
{
    int left, right;
    if (root == NULL)
        return 1;
    if (root->left == NULL && root->right == NULL)
        return 1;
    left = find_hight(root->left);
    right = find_hight(root->right);
    return max(left, right) + 1;
}

int main()
{
    myStack *root;
    root = input();
    int node = find_node(root);
    int hight = find_hight(root);
    if (pow(2, hight) - 1 == node)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}