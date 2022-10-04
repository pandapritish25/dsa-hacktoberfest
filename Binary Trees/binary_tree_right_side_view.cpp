#include <bits/stdc++.h>
using namespace std;

//   Definition for a binary tree node.
struct Node
{
public:
    int val;
    Node *left;
    Node *right;
};

class Solution
{
    vector<int> helper(Node *cur, vector<int> result, int level)
    {
        if (cur == NULL)
            return result;

        if (level == result.size())
            result.push_back(cur->val);
        result = helper(cur->right, result, level + 1);
        result = helper(cur->left, result, level + 1);
        return result;
    }

public:
    vector<int> rightSideView(Node *root)
    {
        vector<int> result;
        return helper(root, result, 0);
    }
};