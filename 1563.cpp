//#include <iostream>
//#include <cstring>
//#include <cstdio>
//using namespace std;
//const int N = 505;
//int g[N][N], dp[N][N], n, m;
//
//int dfs(int x, int y){
//	if(x < 0 || x > n || y < 0 || y > m) return 0;
//	if(dp[x][y]) return dp[x][y];
//	return dp[x][y] = g[x][y] + max(max(dfs(x + 1, y - 1), dfs(x + 1, y)), dfs(x + 1, y + 1));
//}
//
//
//int main(){
//	cin >> n >> m;
//	for(int i = 0; i < n; i++){
//		for(int j = 0; j < m; j++){
//			scanf("%d", &g[i][j]);
//		}
//	}
//	memset(dp, 0, sizeof(dp));
//	int mx = 0;
//	for(int j = 0; j < m; j++){
//		mx = max(mx,dfs(0, j) );
//	}
//	cout << mx << endl;
//	//system("pause");
//}