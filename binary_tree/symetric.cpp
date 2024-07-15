/* we know what is a symetty right
 *
 *
 * mirrorning pattern
 *
 *
 * left and right
 *
 *
 *
 *
 * the root node is same
 *
 * left subtree is a mirror
 *
 * compare left node with right node
 *
 *
*/

bool isSymetric(Node* root1,Node* root2) {
	if(root1 == NULL || root2 == NULL {
			return root1 = root2;
			}
	return (root1->data == root2->data) && isSymetric(root1->left,root2->right) && isSymetric(root1->right,root2->left);
}

