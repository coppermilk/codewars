// [Kata] https://www.codewars.com/kata/5800580f8f7ddaea13000025/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Sum The Tree

int sumTheTreeValues(node* root) {
 /* The idea is to recursively, call left subtree sum, 
 right subtree sum and add their values to current node’s data. */
 return root ? root->value + sumTheTreeValues(root->left) + sumTheTreeValues(root->right) : 0;
}
