//#include <iostream>
//#include <cstring>
//#include <vector>
//using namespace std;
//
//1.�����ӽڵ㣺�ظ�����ͬһ�ڵ�
//2.����DFS֮���нڵ�û�����ʵ�
//
//#define N 101
//#define M 101
//
//bool flag;
//bool visit[N];
//bool isroot[N];
//vector<int> g[N];
//int maxd, maxb, n, m;
//int b[N];
//
//void dfs(int p, int td){
//	if(!flag) return;
//	if(visit[p]){
//		flag = false;
//		return;
//	}
//	visit[p] = true;
//	maxd = td > maxd ? td : maxd;
//	if(++b[td] > maxb) maxb = b[td];
//	for(int i = 0; i < g[p].size(); i++){
//		dfs(g[p][i], td + 1);
//	}
//}
//
//int main(){
//	/*freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);*/
//	int x, y;
//	while(cin >> n >> m && n){
//		memset(g, 0, sizeof(g));
//		memset(visit, 0, sizeof(visit));
//		memset(isroot, true, sizeof(isroot));
//
//		flag = true;
//
//		if(m >= n) flag = false;
//		for(int i = 0; i < m; i++){
//			cin >> x >> y;
//			g[x].push_back(y);
//			isroot[y] = false;
//		}
//
//		maxd = maxb = 0;
//		memset(b, 0, sizeof(b));
//		for(int i = 1; i <= n; i++){
//			if(isroot[i]) dfs(i, 0);
//		}
//		for(int i = 1; i <= n; i++){
//			if(!visit[i]){
//				flag = false;
//				break;
//			}
//		}
//		if(flag) cout << maxd << " " << maxb << endl;
//		else cout << "INVALID" << endl;
//	}
//
//}