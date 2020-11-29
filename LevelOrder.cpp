
Level Order
Given a binary tree, return the level order traversal of its nodes’ values. (ie, from left to right, level by level).

Example :
Given binary tree

    3
   / \
  9  20
    /  \
   15   7
return its level order traversal as:

[
  [3],
  [9,20],
  [15,7]
]






/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int> > sol;
    vector<int> temp;
    queue<TreeNode*> q;
    queue<int> level;
    
    if(A == NULL){
        return sol;
    }
    
    q.push(A);
    level.push(0);
    
    while(!q.empty()){
        TreeNode* curr = q.front();
        int lev = level.front();
        if(sol.size() != level.front()+1){
            sol.push_back(temp);
        }
        sol[lev].push_back(curr->val);
        if(curr->left != NULL){
            q.push(curr->left);
            level.push(lev+1);
        }
        if(curr->right != NULL){
            q.push(curr->right);
            level.push(lev+1);
        }
        q.pop();
        level.pop();
    }
    
    return sol;
}
