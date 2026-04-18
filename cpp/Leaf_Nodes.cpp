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
vector<int> pr;
void leaf_Nodes(myStack *root)
{
    if (root == NULL)
        return;

    queue<myStack *> qn;
    qn.push(root);
    while (!qn.empty())
    {
        myStack *fnt = qn.front();
        qn.pop();

        if (fnt->left == NULL && fnt->right == NULL)
        {
            pr.push_back(fnt->value);
        }
        if (fnt->left)
            qn.push(fnt->left);
        if (fnt->right)
            qn.push(fnt->right);
    }
    sort(pr.begin(), pr.end(), greater<int>());
    for (int i = 0; i < pr.size(); i++)
    {
        cout << pr[i] << " ";
    }
}
int main()
{
    myStack *root;
    root = input();
    leaf_Nodes(root);
    return 0;
}