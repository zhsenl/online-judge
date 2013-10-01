//#include <iostream>
//#include <vector>
//using namespace std;
//int n;
//int in_degree[105];
//vector<int> graph[105];
//
//void dfs()
//{
//	bool over = true;
//	for(int i = 1; i <= n; i++){
//		if(in_degree[i] == 0){
//			over = false;
//			in_degree[i] --;
//			cout << i << " ";
//			for(vector<int>::iterator it = graph[i].begin(); it != graph[i].end();it++){
//				in_degree[*it]--;
//			}
//		}
//	}
//	if(!over){
//		dfs();
//	}
//}
//
//int main(){
//	int  i, t;
//	cin >> n;
//	for(i = 1; i <= n; i++){
//		while(cin >> t && t != 0){
//			graph[i].push_back(t);
//			in_degree[t]++;
//		}
//	}
//	dfs();
//	cout << endl;
//	system("pause");
//	return 0;
//}