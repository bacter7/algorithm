/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */

// Recursive Solution
//  void *postVisit(struct Node* root, int *v, int* index) {
//      if (root == NULL) return NULL;
//      for (int i = 0; i < root->numChildren; i++) {
//          postVisit(root->children[i], v, index);
//      }
//      v[(*index)++] = root->val;
//      return NULL;
//  }

//  Iterative solution
void * postVisit(struct Node *root, int *v, int *index) {
    int i = 0;
    int count[1000] = {0};
    struct Node *prev[1000];
    prev[i++] = NULL;
    while (root != NULL) {
        if (root->numChildren == count[i]) {
            v[(*index)++] = root->val;
            count[i--] = 0;
            root = prev[i];
        } else {
            prev[i] = root;
            root = root->children[count[i++]++];
        }
    }
    return NULL;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* postorder(struct Node* root, int* returnSize) {
    int *v = (int *)calloc(10000, sizeof(int));
    int index = 0;
    postVisit(root, v, &index);
    *returnSize = index;
    return v;
}