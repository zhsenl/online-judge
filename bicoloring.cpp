//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//
//#define N 1010
//int n, m;
//vector<int> g[N];
//int c[N];
//
//bool bfs(int s){
//	memset(c, 0, sizeof(c));
//	queue<int> q;
//	c[s] = 1;
//	q.push(s);
//	while(!q.empty()){
//		int u = q.front(); q.pop();
//		for(int i = 0; i < g[u].size(); i++){
//			int v = g[u][i];
//			if(c[v] == 0){
//				c[v] = c[u] == 1 ? 2 : 1;
//				q.push(v);
//			}else{
//				if(c[v] == c[u]) return false;
//			}
//		}
//	}
//	return true;
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
//	cout << (bfs(1) ? "yes" : "no")  << endl;
//
//}