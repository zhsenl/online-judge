//#include <iostream>
//#include <stdio.h>
//#include <vector>
//#include <stack>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//enum GridState{empty, occupied, attacked};
//const int kMaxN = 1024;
//GridState grid[kMaxN][kMaxN];
//
//struct Point{
//	int x, y;
//	Point(int x, int y){
//		this->x = x;
//		this->y = y;
//	}
//	void setxy(int x, int y){
//		this->x = x;
//		this->y = y;
//	}
//};
//
//int num_row, num_col;
//
//int dKnight[8][2] = {{1,2},{1,-2},{2,-1},{-2,-1},{-1,-2},{-1,2},{-2,1},{2,1}};
//int dQueen[8][2] = {{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1},{0,1},{1,1}};
//
//void occupy(vector<Point> v){
//	for (int i = 0; i < v.size(); i++)
//	{
//		grid[v[i].x][v[i].y] = occupied;
//	}
//}
//
//bool in_board_and_unoccupied(Point p){
//	if(1 <= p.x && p.x <= num_row){
//		if(1 <= p.y && p.y <= num_col){
//			return grid[p.x][p.y] != occupied;
//		}
//	}
//	return false;
//}
//
//void knightAttack(vector<Point> points){
//	for (int i = 0; i < points.size(); i++){
//		for (int dir = 0; dir < 8; dir++){
//			Point newp(points[i].x + dKnight[dir][0], points[i].y + dKnight[dir][1]);
//			if (in_board_and_unoccupied(newp)){
//				grid[newp.x][newp.y] = attacked;
//			}
//		}
//	}
//}
//
//void queenAttack(vector<Point> points){
//	for (int i = 0; i < points.size(); i++){
//		for(int dir = 0; dir < 8; dir++){
//			Point newp(points[i].x + dQueen[dir][0], points[i].y + dQueen[dir][1]);
//			while (in_board_and_unoccupied(newp)){
//				grid[newp.x][newp.y] = attacked;
//				newp.setxy(newp.x + dQueen[dir][0], newp.y + dQueen[dir][1]);
//			}
//		}
//	}
//}
//
//int main(){
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
//	while(cin >> num_row >> num_col && num_row != 0){
//		vector<Point> vs[3];
//		int num;
//		for(int v = 0; v < 3; v++){
//			cin >> num;
//			for(int i = 0; i < num; i++){
//				int x, y;
//				cin >> x >> y;
//				Point p(x, y);
//				vs[v].push_back(p);
//			}
//			occupy(vs[v]);
//		}
//		queenAttack(vs[0]);
//		knightAttack(vs[1]);
//		int ans = 0;
//		for(int i = 1; i <= num_row; i++){
//			for(int j = 1; j <= num_col; j++){
//				//cout << grid[i][j] << " ";
//				if(grid[i][j] == empty){
//					ans ++;
//				}
//			}
//			cout << endl;
//		}
//		static int id = 1;
//		cout << "Board " << id++ << " has " << ans << " safe squares." << endl;
//	}
//}