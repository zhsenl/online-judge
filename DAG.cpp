//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//
//const int V = 1110;
//int edge[V][V], parent[V], pre[V], post[V], tag;
//bool isDAG;
//int n, m, u, v;
//
//void dfs(int cur, int n){
//	pre[cur] = ++tag;
//	for(int i = 1; i <= n; i++){
//		if(edge[cur][i]){
//			if(pre[i] == 0){
//				parent[i] = cur;
//				dfs(i, n);
//			}else{
//				if(post[i] == 0) isDAG = false;
//				else if(pre[i] > pre[cur]);
//				else ;
//			}
//		}
//	}
//	post[cur] = ++tag;
//}
//
//int main(){
//	memset(edge, 0, sizeof(edge));
//	cin >> n >> m;
//	for(int i = 0; i < m; i++){
//		cin >> u >> v;
//		edge[u][v] = 1;
//	}
//	memset(parent, -1, sizeof(parent));
//	memset(pre, 0, sizeof(pre));
//	memset(post, 0, sizeof(post));
//	tag = 0;
//	for(int i = 1; i <= n; i++){
//		if(parent[i] == -1){
//			dfs(i, n);
//		}
//	}
//}