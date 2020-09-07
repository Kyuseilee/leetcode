/*
 * @lc app=leetcode.cn id=449 lang=cpp
 *
 * [449] 序列化和反序列化二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (root == nullptr) return {};

        string str;
        queue<TreeNode*> queue;
        queue.push(root);
        while(!queue.empty()){
            int count = queue.size();
            while(count--){
                TreeNode* node = queue.front();
                queue.pop();
                if(node == nullptr) str += "#";
                else{
                    str += to_string(node->val) + "!";
                    queue.push(node->left);
                    queue.push(node->right);
                }
            }
        } 
        return str;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.empty())    return NULL;
        int i =0, j=0;
        while(j<data.size() && data[++j]!='!') ;    // [i, j) 存储节点
        TreeNode* head = new TreeNode(stoi(data.substr(i, j-i)) );
        
        queue<TreeNode*> queue;
        queue.push(head);
        
        while(i < data.size()){
            TreeNode* node = queue.front();
            queue.pop();
            if(node == NULL)    continue;
            // 左节点
            i = ++j;
            if(i >= data.size())    break;
            if(data[i] == '#')
                node->left = nullptr;
            else{
                while(j<data.size() && data[++j] != '!');
                node->left = new TreeNode(stoi(data.substr(i, j-i)) );
            }
            queue.push(node->left);
            // 右节点
            i = ++j;
            if(i >= data.size())    break;
            if(data[i] == '#')
                node->right = nullptr;
            else{
                while(j<data.size() && data[++j] != '!');
                node->right = new TreeNode(stoi(data.substr(i, j-i)) );
            }
            queue.push(node->right);
        }
        
        return head;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));
// @lc code=end

