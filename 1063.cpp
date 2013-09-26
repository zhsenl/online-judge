//#include<iostream>
//#include <algorithm>
//#include <queue>
//#include <vector>
//#include <map>
//using namespace std;
//
//const int INF = 999999999;
//Node arr[30010];
//
//
//struct Node{
//	int id, salary, height;
//	int boss;
//	vector<int> child;
//};
//
//bool cmp(Node a, Node b){
//	return a.salary > b.salary;
//}
//
//int main(){
//	int n;
//	cin >> n;
//	while(n--){
//		int m, q;
//		cin >> m >> q;
//		for(int i = 1; i <= m; i++){
//			cin >> arr[i].id >> arr[i].salary >> arr[i].height;
//		}
//		arr[0].id = 0;
//		arr[0].salary = arr[0].height = INF;
//		sort(arr+1, arr+1+m,cmp);
//		map<int, int> ma;
//		map<int, int>::iterator p;
//		for(int i = 0; i <=m ;i++){
//			ma[arr[i].id] = i;
//		}
//		arr[0].child.push_back(i);
//		arr[1].boss = 0;
//
//		Node last = arr[1];
//		for(int i = 2; i <= m; i++){
//			p = ma.find(last.id);
//			int rootindex = p->second;
//			if(arr[i]..height > la)
//		}
//	}
//}