#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    int val;
    myStack *left;
    myStack *right;
    myStack(int val)
    {
        this->val = val;
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

        int l, r;
        cin >> l >> r;
        myStack *newleft = NULL;
        myStack *newright = NULL;
        if (l != -1)
            newleft = new myStack(l);
        if (r != -1)
            newright = new myStack(r);
        fnt->left = newleft;
        fnt->right = newright;

        if (fnt->left)
            q.push(fnt->left);
        if (fnt->right)
            q.push(fnt->right);
    }
    return root;
}

void left_side(myStack *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right != NULL)
    {
        left_side(root->right);
    }
    left_side(root->left);
    cout << root->val << " ";
}
void lright_side(myStack *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    if (root->right == NULL && root->left != NULL)
    {
        lright_side(root->left);
    }
    if (root->right != NULL)
        lright_side(root->right);
}

int main()
{
    myStack *root;
    root = input();
    left_side(root->left);
    cout << root->val << " ";
    lright_side(root->right);
    return 0;
}