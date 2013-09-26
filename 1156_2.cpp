///*
//题目中没有任何信息表明input是按照根左右来的，
//实际上也不是。
//存在并且不是非根的就是根
//*/
//#include <iostream>
//#include "string.h"
//using namespace std;
//struct Node{
//	char c;
//	int left;
//	int right;
//};
//Node nodes[1001];
//bool exist[1001];
//bool root[1001];
//
//void pre(int id){
//	if(id == 0){
//		return ;
//	}
//	cout << nodes[id].c;
//	pre(nodes[id].left);
//	pre(nodes[id].right);
//}
//
//int main(){
//	int n;
//	while(cin >> n){
//		int id, left, right;
//		char c;
//		memset(nodes, 0, sizeof(nodes));
//		memset(exist, false, sizeof(exist));
//		memset(root, true, sizeof(root));
//		while(n--){
//			cin >> id >> c >> left >> right;
//			nodes[id].c = c;
//			nodes[id].left = left;
//			nodes[id].right = right;
//			root[left] = false;
//			root[right] = false;
//			exist[id] = true;
//		}
//		int i;
//		for(i = 0; i < 1001; i++){
//			if(exist[i] && root[i]){
//				break;
//			}
//		}
//		pre(i);
//		cout << endl;
//	}
//}