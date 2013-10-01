//// Problem#: 1024
//// Submission#: 2222903
//// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
//// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
//// All Copyright reserved by Informatic Lab of Sun Yat-sen University
//#include <iostream>
//#include <string.h>
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//int n;
//struct Edge{
//	int x;
//	int y;
//	int d;
//	Edge(int xx, int yy, int dd){
//		x = xx;
//		y = yy;
//		d = dd;
//	}
//} ;
//
//vector<Edge> edges[10011];
//bool visit[10011];
//
//int dfs(int k){
//	int max = 0;
//	visit[k] = true;
//	for(unsigned int j = 0; j < edges[k].size(); j++){
//		if(visit[edges[k][j].y] == false){
//			int max2 = dfs(edges[k][j].y);
//			if(max2 + edges[k][j].d > max){
//				max = max2 + edges[k][j].d;
//			}
//		}
//	}
//	visit[k] = false;
//	return max;
//}
//int main(){
//	
//	int k;
//	 while(scanf("%d%d",&n,&k) != EOF){
//		 memset(edges, 0, sizeof(edges));
//		 memset(visit, false, sizeof(visit));
//		for(int i = 0; i < n - 1; i++){
//			int x, y, d;
//			scanf("%d%d%d",&x,&y,&d);
//			edges[x].push_back(Edge(x, y, d));
//			edges[y].push_back(Edge(y, x, d));
//		}
//		printf("%d\n",dfs(k));
//	}
//
//	//system("pause");
//	return 0;
//
//}                                 