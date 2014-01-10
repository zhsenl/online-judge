//#include <iostream>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//
//#define N 205
//int n, m;
//vector<int> g[N];
//bool v[N];
//
//bool dfs(int s){
//	v[s] = true;
//	if(s == n - 1) return true;
//	bool flag = false;
//	for(int i = 0; i < g[s].size(); i++){
//		if(!v[g[s][i]] && dfs(g[s][i])){
//			flag = true;
//			break;
//		}
//	}
//	return flag;
//}
//
//int main(){
//
//	while(cin >> n && n){
//		memset(g, 0, sizeof(g));
//		memset(v, false, sizeof(v));
//		cin >> m;
//		for(int i = 0; i < m; i++){
//			int a, b;
//			cin >> a >> b;
//			g[a].push_back(b);
//		}
//		
//		if(dfs(0)){
//			cout << "I can post the letter" << endl;
//		}else{
//			cout << "I can't post the letter" << endl;
//		}
//	}
//
//}