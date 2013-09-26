/*
	run time error
*/
//#include <iostream>
//using namespace std;
//
//struct Node{
//	int id;
//	char c;
//	Node *left;
//	Node *right;
//};
//Node* construct_tree(Node *node){
//	cin >> node->id >> node->c;
//	int left_id, right_id;
//	cin >> left_id >> right_id;
//	if(left_id != 0){
//		node->left = construct_tree(new Node());
//	}
//	if(right_id != 0){
//		node->right = construct_tree(new Node());
//	}
//	return node;
//}
//void destroy_tree(Node *node){
//	if(node->left == NULL && node->left == NULL){
//		delete(node);
//	}else{
//		if(node->left){
//			destroy_tree(node->left);
//		}
//		if(node->right){
//			destroy_tree(node->right);
//		}
//	}
//}
//void pre(Node *node){
//	if(node == NULL){
//		return;
//	}
//	cout << node->c;
//	pre(node->left);
//	pre(node->right);
//}
//int main(){
//	int n;
//	while(cin >> n){
//		Node *root = new Node();
//		construct_tree(root);
//		pre(root);
//		cout << endl;
//		destroy_tree(root);
//	}
//}