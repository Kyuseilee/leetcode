/*
 * @lc app=leetcode.cn id=590 lang=cpp
 *
 * [590] N叉树的后序遍历
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
    vector<int> postorder(Node* root) {
        vector<int> res;
        if(!root) return res;
        stack<Node*> stk;
        stk.push(root);
        while(!stk.empty())
        {
            Node* tmp = stk.top();
            stk.pop();
            res.push_back(tmp->val);
            for(auto i : tmp->children){
                stk.push(i);
            }
        }
        reverse(res.begin(), res.end());
        return res;
        
    }
};
// @lc code=end

