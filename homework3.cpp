// 1)  Convert Sorted List to Binary Search Tree 
// Given the head of a singly linked list where elements are sorted in ascending order, convert it to a height 
// balanced BST. 
// For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two 
// subtrees of every node never differ by more than 1. 
// Example 1: 
// Input: head = [-10,-3,0,5,9] 
// Output: [0,-3,9,-10,null,5] 
// Explanation: One possible answer is [0,-3,9,-10,null,5], which represents the 
// shown height balanced BST. 
// Example 2: 
// Input: head = [] 

bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr || q== nullptr)
            return p==q;
            
        if(p->val != q->val)
            return false;
        
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        
 }

// Output: [] 
// 2)  Construct Binary Tree from Preorder and Inorder Traversal 
// Given two integer arrays preorder and inorder where preorder is the preorder traversal of a binary tree and 
// inorder is the inorder traversal of the same tree, construct and return the binary tree. 
//  Example 1: 
// Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7] 
// Output: [3,9,20,null,null,15,7] 
// Example 2: 
// Input: preorder = [-1], inorder = [-1] 
// Output: [-1] 
 
// 3)  Binary Tree Maximum Path Sum A path in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an 
// edge connecting them. A node can only appear in the sequence at most once. Note that the path does not 
// need to pass through the root. The path sum of a path is the sum of the node's values in the path. 
// Given the root of a binary tree, return the maximum path sum of any non-empty path.  
// Example 1: 
// Input: root = [1,2,3] 
// Output: 6 
// Explanation: The optimal path is 2 -> 1 -> 3 with a path sum of 2 + 1 + 3 = 
// 6. 
// Example 2: 
// Input: root = [-10,9,20,null,null,15,7] 
// Output: 42 
// Explanation: The optimal path is 15 -> 20 -> 7 with a path sum of 15 + 20 + 7 
// = 42. 
//  Constraints: 
// • The number of nodes in the tree is in the range [1, 3 * 104]. 
// • -1000 <= Node.val <= 1000 
// 4)  Find largest value in each Tree row Given the root of a binary tree, return an array of the largest value in each row of the tree (0-indexed). 
// Example 1: 
// Input: root = [1,3,2,5,3,null,9] 
// Output: [1,3,9] 
// Example 2: 
// Input: root = [1,2,3] 
// Output: [1,3] 
 
// 5)  Balance a Binary Search Tree Given the root of a binary search tree, return a balanced binary search tree with the same node values. If 
// there is more than one answer, return any of them. A binary search tree is balanced if the depth of the two 
// subtrees of every node never differs by more than 1. 
// Example 1: 
// Input: root = [1,null,2,null,3,null,4,null,null] 
// Output: [2,1,3,null,null,null,4] 
// Explanation: This is not the only correct answer, [3,1,4,null,2] is also 
// correct. 
// Input: root = [2,1,3] 
// Output: [2,1,3] 
//  Constraints: 
// • The number of nodes in the tree is in the range [1, 104]. 
// • 1 <= Node.val <= 105 
 
