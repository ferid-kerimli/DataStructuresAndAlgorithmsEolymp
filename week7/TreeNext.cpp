#include <iostream>

using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}

    TreeNode *Next(TreeNode *tree)
    {
        if (tree == NULL) return NULL;
    
        if (tree->right != NULL)
        {
            TreeNode *temp = tree->right;
            while (temp->left != NULL)
            {
                temp = temp->left;
            }
            return temp;
        }
    
        TreeNode *successor = NULL;
        TreeNode *ancestor = tree;
        
        while (ancestor != NULL)
        {
            if (tree->val < ancestor->val)
            {
                successor = ancestor; 
                ancestor = ancestor->left;
            }
            else if (tree->val > ancestor->val)
            {
                ancestor = ancestor->right;
            }
            else
            {
                break; 
            }
        }
        
        return successor;
    }    
};