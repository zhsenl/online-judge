//#include <iostream>
//#include <fstream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//const int N = 6 * 6 + 1;
//int map[N][N];
//
//bool check(vector<int> v){
//	sort(v.begin(), v.end());
//	for(unsigned int i = 0; i < v.size(); i++){
//		if(v[i] != i + 1){
//			return false;
//		}
//	}
//	return true;
//}
//
//int main(){
//	freopen("A-large-practice.in","r", stdin);
//	freopen("A-large-practice.out","w", stdout);
//	int t;
//	//scanf("%d", &t);
//	cin >> t;
//	while(t--){
//		int n;
//		scanf("%d", &n);
//		int m = n * n;
//		for(int i = 0; i < m; i++){
//			for(int j = 0; j < m; j++){
//				scanf("%d", &map[i][j]);
//			}
//		}
//		bool flag = true;
//		for(int i = 0; i < m; i++){
//			vector<int> row;
//			for(int j = 0; j < m; j++){
//				row.push_back(map[i][j]);
//			}
//			flag &= check(row);
//		}
//		for(int j = 0; j < m; j++){
//			vector<int> col;
//			for(int i = 0; i < m; i++){
//				col.push_back(map[i][j]);
//			}
//			flag &= check(col);
//		}
//		for(int i = 0; i < n; i++){
//			for(int j = 0; j < n; j++){
//				vector<int> grid;
//				for(int x = 0; x < n; x++){
//					for(int y = 0; y < n; y++){
//						grid.push_back(map[i*n + x][j*n + y]);
//					}
//					
//				}
//				flag &= check(grid);
//			}
//		}
//		static int id = 1;
//		printf("Case #%d: %s\n", id++, flag ? "Yes" : "No");
//	}
//	
//}