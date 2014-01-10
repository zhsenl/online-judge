//#include <iostream>
//#include <cstring>
//#include <vector>
//using namespace std;
//
//#define N 105
//int d[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
//bool g[N][N];
//bool v[N][N];
//int sx, sy, tx, ty;
//int n, m;
//
//bool dfs(int sx, int sy){
//	v[sx][sy] = true;
//	if(sx == tx && sy == ty) return true;
//	for(int i = 0; i < 4; i++){
//		int x = sx + d[i][0], y = sy + d[i][1];
//		if(0 < x && x <= n && 0 < y && y <= m ){
//			if(!v[x][y] && g[x][y] && dfs(x, y)){
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		memset(g, 0, sizeof(g));
//		memset(v, 0, sizeof(v));
//		cin >> n >> m;
//		for(int i = 1; i <= n; i++){
//			for(int j = 1; j <= m; j++){
//				cin >> g[i][j];
//			}
//		}
//		cin >> sx >> sy >> tx >> ty;
//		cout << dfs(sx, sy) << endl;
//	}
//
//}