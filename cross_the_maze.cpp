//#include <iostream>
//#include <cstdio>
//#include <queue>
//#include <climits>
//#include <string>
//
//using namespace std;
//
//const int N = 102;
//char map[N][N];
//string step[N][N];
//int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
//char dir[] = {'N','S','W','E'};
//
//int main(){
//	/*freopen("input.txt","r", stdin);
//	freopen("output.txt", "w", stdout);
//
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		int n;
//		scanf("%d", &n);
//		for(int i = 1; i <= n; i++){
//			scanf("%s", &map[i][1]);
//		}
//		for(int i = 1; i <= n; i++){
//			for(int j = 1; j <= n; j++){
//				step[i][j] = "";
//			}
//		}
//		int sx, sy, ex, ey;
//		scanf("%d%d%d%d", &sx, &sy, &ex, &ey);
//		bool out_of_energy = true;
//		queue<pair<int, int> > q;
//		q.push(make_pair(sx, sy));
//		step[sx][sy] = "";
//		while(q.size()){
//			int cx = q.front().first, cy = q.front().second;
//			q.pop();
//			if(step[cx][cy].size() > 10000){
//				break;
//			}
//			if(cx == ex && cy == ey){
//				out_of_energy = false;
//				break;
//			}
//			for(int i = 0; i < 4; i++){
//				int nx = cx + dx[i], ny = cy + dy[i];
//				if( nx > 0 && nx <= n && ny > 0 && ny <= n && map[nx][ny] != '#' && map[][] == '#'){
//					if(step[nx][ny].size() == 0){
//						q.push(make_pair(nx, ny));
//						step[nx][ny] = step[cx][cy] + dir[i];  
//					}
//				}
//			}
//		}
//		static int id = 1;
//		if(out_of_energy){
//			cout << "Case #" << id++ << ": Edison ran out of energy." << endl;
//		}else{
//			cout << "Case #" << id++ << ": " << step[ex][ey].size() << endl << step[ex][ey] << endl;
//		}
//	}*/
//	cout << ((4) & 3) << endl;
//	cout << ((-1) & 5) << endl;
//	system("pause");
//}