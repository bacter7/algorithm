void  *postVisit(struct Node* root, int* v, int *index) {
  int i = 0, count[1000] = {0};
  struct Node *prev[1000];
  prev[i++] = NULL;
  while(root != NULL) {
      if (count[i] == 0) {
          v[(*index)++] = root->val;
      }
      if (count[i]  == root->numChildren) {
          count[i--] = 0;
          root = prev[i];
      } else {
          prev[i] = root;
          root = root->children[count[i++]++];
      }
  }
  return NULL;
}

int* preorder(struct Node* root, int* returnSize) {
  int *v = (int*)calloc(10000, sizeof(int)), index = 0;
  postVisit(root, v, &index);
  *returnSize = index;
  return v;
}