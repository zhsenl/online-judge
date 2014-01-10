//#include <iostream>
//#include <map>
//#include <algorithm>
//#include <stdio.h>
//using namespace std;
//
//const int N = 10001;
//pair<int, int> nodes[N];
//
//bool cmp(pair<int, int> p, pair<int, int> p2){
//	return p.second < p2.second;
//}
//
//int main(){
//	//freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//	int n, s;
//
//	while((cin >> n >> s) &&n != 0){
//
//		for(int i = 0; i < n; i++){
//			int a, b;
//			cin >> a >> b;
//			nodes[i] =  make_pair(a, b);
//		}
//		sort(nodes, nodes + n, cmp );
//		bool flag = true;
//		for(int i = 0; i < n; i++){
//			if(s < nodes[i].second){
//				cout << "NO" <<endl;
//				flag = false;
//				break;
//			}else{
//				s += nodes[i].first;
//			}
//		}
//		if(flag){
//			cout << "YES" << endl;
//		}
//	}
//	//system("pause");
//}