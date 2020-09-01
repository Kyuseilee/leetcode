/*
 * @lc app=leetcode.cn id=589 lang=cpp
 *
 * [589] N叉树的前序遍历
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
        stack<Node*> myStack;
        Node* p;

        if(root == NULL) return res;
        myStack.push(root);
        while(!myStack.empty())
        {
            p = myStack.top();
            myStack.pop();

            res.push_back(p->val);
            int width = p->children.size();

            for(int i = width-1; i >=0; i--)
            {
                myStack.push(p->children[i]);
            }
        }
    return res;
    }
};
// @lc code=end

