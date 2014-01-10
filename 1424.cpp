//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <queue>
//using namespace std;
//
//const int N = 10005;
//vector<int> g[N];
//int in[N];
//struct Node{
//	int n, l;
//	Node(int n, int l){
//		this->n = n;
//		this->l = l;
//	}
//};
//
//int main(){
//	memset(g, 0, sizeof(g));
//	memset(in, 0, sizeof(in));
//	int n, m ;
//	cin >> n >> m;
//	int a, b;
//	for(int i = 0; i < m; i++){
//		cin >> a >> b;
//		g[b].push_back(a);
//		in[a]++;
//	}
//	queue<Node> q;
//	int c = 0, s = 0;
//	for(int i = 1; i <= n; i++){
//		if(in[i] == 0){
//			q.push(Node(i, 0));
//			c++;
//			s += 100;
//		}
//	}
//	while(!q.empty()){
//		Node u = q.front(); q.pop();
//		for(int i = 0; i < g[u.n].size(); i++){
//			int v = g[u.n][i];
//			in[v]--;
//			if(in[v] == 0){
//				q.push(Node(v, u.l + 1));
//				s += 100 + u.l + 1;
//				c ++;
//			}
//		}
//	}
//	if(c < n) cout << "Poor Xed" << endl;
//	else cout << s << endl;
//	//system("pause");
//}
