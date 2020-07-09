/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        queue<pair<TreeNode*,unsigned long long>> q;
        q.push(make_pair(root,1));
        int ans=0;
        while(!q.empty()){
            int n = q.size();
            unsigned long long left = q.front().second,right;
            for(int i=0;i<n;i++){
                TreeNode* temp = q.front().first;
                right = q.front().second;
                q.pop();
                if(temp->left)
                    q.push(make_pair(temp->left,2*right));
                if(temp->right)
                    q.push(make_pair(temp->right,2*right+1));
            }
            ans = max(ans,(int)(right-left+1));
        }
        return ans;
    }
};