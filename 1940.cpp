//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <vector>
//#include <functional>
//using namespace std;
//
//#define N 100005
//int indegree[N];
//vector<int> g[N];
//
//int main()
//{
//	int t, n, m , a, b;
//	cin >> t;
//	while(t--){
//		memset(g, 0, sizeof(g));
//		memset(indegree, 0, sizeof(g));
//		cin >> n >> m;
//		for(int i= 0; i < m ;i ++){
//			cin >> a >> b;
//			g[a].push_back(b);
//			indegree[b]++;
//		}
//		priority_queue<int, vector<int>, greater<int> > pq;
//		for(int i = 1; i <= n; i++) 
//			if(indegree[i] == 0) 
//				pq.push(i);
//		while(!pq.empty()){
//			int tmp = pq.top(); pq.pop();
//			cout << tmp << " ";
//			for(unsigned i = 0; i < g[tmp].size(); i++){
//				int v = g[tmp][i];
//				indegree[v]--;
//				if(indegree[v] == 0) 
//					pq.push(v);
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}   