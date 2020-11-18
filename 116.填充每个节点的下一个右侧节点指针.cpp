/*
 * @lc app=leetcode.cn id=116 lang=cpp
 *
 * [116] 填充每个节点的下一个右侧节点指针
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    queue<Node*> que;
    Node* connect(Node* root) {
        if(!root)   return {};
        que.push(root);
        while(!que.empty()){
            int n = que.size();
            for(int i = 0; i < n; i++){
                Node* node = que.front();
                que.pop();
                if(i < n-1)
                    node->next = que.front();
                else
                {
                    node->next = nullptr;
                }
                if(node->left)
                que.push(node->left);
                if(node->right)
                que.push(node->right);
            }
        }
        return root;
    }
};
// @lc code=end

