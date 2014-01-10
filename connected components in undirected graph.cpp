//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//
//#define N 110
//int n, m;
//vector<int> g[N];
//bool v[N];
//
//void bfs(int s){
//	queue<int> q;
//	v[s] = true;
//	q.push(s);
//	while(!q.empty()){
//		int node = q.front(); q.pop();
//		for(int i = 0; i < g[node].size(); i++){
//			if(!v[g[node][i]]){
//				v[g[node][i]] = true;
//				q.push(g[node][i]);
//			}
//		}
//	}
//}
//
//int main(){
//
//	cin >> n >> m;
//	for(int i= 0; i < m; i++){
//		int x, y;
//		cin >> x >> y;
//		g[x].push_back(y);
//		g[y].push_back(x);
//	}
//	memset(v, 0, sizeof(v));
//	int c = 0;
//	for(int i = 1; i <= n; i++){
//		if(!v[i]){
//			c++;
//			bfs(i);
//		}
//	}
//	cout << c << endl;
//
//}