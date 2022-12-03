#include <stdio.h>
#include <stdlib.h>


typedef struct TreeNode{
	char data;
	struct TreeNode *left, *right;
} TreeNode;
TreeNode* search(TreeNode* root, char data){
	if(root != NULL){
		if(root->data == data) return root;
		else{
			TreeNode* node = search(root->left, data);
			if(node != NULL) return node;
			else return search(root->right, data);
		}
	}
	else return NULL;
}
TreeNode* makeNode(char data){
	TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}
void setNode(TreeNode* node, char a, char b, char c){
	node->data = a;
	if(b != '.') node->left = makeNode(b);
	if(c != '.') node->right = makeNode(c);
}
void preorder(TreeNode* root)
{
	if(root != NULL){
		printf("%c", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(TreeNode* root)
{
	if(root != NULL){
		inorder(root->left);
		printf("%c", root->data);
		inorder(root->right);
	}
}

void postorder(TreeNode* root)
{
	if(root != NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%c", root->data);
	}
}
int main(){
	int n;
	char a,b,c;
	scanf("%d", &n);
	getchar();
	TreeNode* root = makeNode(NULL);
	TreeNode* root2;
	for(int i = 0; i< n; i++){
		scanf("%c %c %c", &a, &b, &c);
		getchar();
		root2 = search(root, a);
		if(root2 != NULL) setNode(root2, a,b,c);
		else setNode(root,a,b,c);
	}
	preorder(root);
	printf("\n");
	inorder(root);
	printf("\n");
	postorder(root);
	return 0;
}