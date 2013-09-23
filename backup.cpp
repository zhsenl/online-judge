//#include <iostream>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//int dest[2][4];
//
//
//void A(int (*a)[4]){
//	for(int j = 0; j < 4; j++){
//		swap(a[0][j],a[1][j]);
//	}	
//}
//void B(int (*a)[4]){
//	int temp[2] = {a[0][0],a[1][0]};
//	for(int j = 1; j < 4; j++){
//		swap(a[0][j], temp[0]);
//		swap(a[1][j], temp[1]);
//	}
//	swap(a[0][0], temp[0]);
//	swap(a[1][0], temp[1]);
//}
//void C(int (*a)[4]){
//	int temp = a[0][1];
//	swap(a[0][2],temp);
//	swap(a[1][2],temp);
//	swap(a[1][1],temp);
//	swap(a[0][1],temp);
//}
//bool check(int (*source)[4]){
//	for(int i = 0; i < 2; i++){
//		for(int j = 0; j < 4; j++){
//			if(source[i][j] != dest[i][j]){
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//void display(int (*a)[4]){
//	cout << "----------------------"<<endl;
//	for(int i = 0; i < 2; i++){
//		for(int j = 0; j < 4; j++){
//			cout << a[i][j];
//		}
//		cout << endl;
//	}
//}
//bool bfs(int (*a)[4], int count){
//	if(count == 0){
//		return false;
//	}
//	A(a);
//}
//
//int main(){
//	int n;
//	while(cin >> n && n != -1){
//		int source[2][4] = {{1,2,3,4},{8,7,6,5}};
//		for(int i = 0; i < 2; i++){
//			for(int j = 0; j < 4; j++){
//				cin >> dest[i][j];
//			}
//
//			bfs(source, n);
//		}
//
//	}
//}