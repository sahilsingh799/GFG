/* Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int sumBT(Node* root) {
        // code here
        if(root==NULL)return 0;
            // Recursively add current data + left subtree sum + right subtree sum
        return root->data + sumBT(root->left) + sumBT(root->right);

    }
};