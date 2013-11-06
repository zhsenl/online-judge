//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <climits>
//#include <queue>
//
//using namespace std;
//
//const int N = 101;
//int map[N][N];
//pair<int, int> dis[N][N];
//int dx[] = {0, 0, -1, 1}, dy[] = {-1, 1, 0, 0};
//
//int main(){
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w", stdout);
//
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		int row, col;
//		scanf("%d%d", &row, &col);
//		int sx, sy, ex, ey;
//		scanf("%d%d%d%d", &sx, &sy, &ex, &ey);
//
//		for(int i = 0; i < row; i++){
//			for(int j = 0; j < col; j++){
//				scanf("%d", &map[i][j]);
//				dis[i][j] = make_pair(INT_MAX, INT_MIN);
//			}
//		}
//
//		queue<pair<int, int> > q;
//		q.push(make_pair(sx, sy));
//		dis[sx][sy] = make_pair(0, map[sx][sy]);
//		while(q.size()){
//			int cx = q.front().first, cy = q.front().second;
//			q.pop();
//			for(int i = 0; i < 4; i++){
//				int nx = cx + dx[i], ny = cy + dy[i];
//				if(nx >= 0 && nx < row && ny >= 0 && ny < col && map[nx][ny] != -1){
//					if(dis[nx][ny].first == INT_MAX){
//						q.push(make_pair(nx, ny));
//					}
//					if(dis[nx][ny].first < dis[cx][cy].first + 1){
//						continue;
//					}
//					dis[nx][ny].first = dis[cx][cy].first + 1;
//					dis[nx][ny].second = max(dis[nx][ny].second, dis[cx][cy].second + map[nx][ny]);
//				}
//			}
//		}
//
//		static int id = 0;
//		printf("Case #%d: ", ++id);
//		if (dis[ex][ey].first == INT_MAX) {
//			printf("Mission Impossible.\n");
//		} else {
//			printf("%d\n", dis[ex][ey].second);
//		}
//	}
//	
//}