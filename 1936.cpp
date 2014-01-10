//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//bool v[9][9];
//int d[][2] = {{-1,-2},{-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2}};
//int sx, sy, ex, ey;
//
//struct Node{
//	int x, y, step;
//	Node(int x, int y, int step){
//		this->x = x;
//		this->y = y;
//		this->step = step;
//	}
//};
//
//int bfs(){
//	Node s = Node(sx, sy, 0);
//	v[sx][sy] = true;
//	queue<Node> q;
//	q.push(s);
//	while(!q.empty()){
//		Node u = q.front();q.pop();
//		if(u.x == ex && u.y == ey){
//			return u.step;
//		}
//		for(int i = 0; i < 8; i++){
//			int x = u.x + d[i][0], y = u.y + d[i][1];
//			
//			if(0 < x && x < 9 && 0 < y && y < 9 ){
//				if(!v[x][y]){
//					v[x][y] = true;
//					Node v = Node(x, y, u.step + 1);
//					q.push(v);
//				}
//			}
//			
//		}
//	}
//	
//	return -1;
//}
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		char t1, t2;
//		cin >> t1 >> sy >> t2 >> ey;
//		sx = t1 - 'a' + 1; ex = t2 - 'a' + 1;
//		memset(v, false, sizeof(v));
//		printf("To get from %c%d to %c%d takes %d knight moves.\n",t1,sy,t2,ey,bfs());
//	}
//	//system("pause");
//}