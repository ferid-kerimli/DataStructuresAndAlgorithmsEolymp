#include <iostream>

using namespace std;

class TreeNode
{
public:
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}

  TreeNode *Find(TreeNode *tree, int element) {
    if (tree == NULL) return NULL;

    if (tree->val == element) return tree; 

    TreeNode *leftSearch = Find(tree->left, element);
    if (leftSearch) return leftSearch; 

    return Find(tree->right, element);
  }
};