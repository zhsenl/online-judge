//#include <iostream>
//#include <queue>
//#include <string>
//#include <map>
//using namespace std;
//
//int n;
//string target;
//map<string, int> m;
//
//struct graph{
//	string s;
//	string ans;
//};
//
//void change(graph g, graph &next, int ope){
//	switch(ope){
//	case 1:
//		for(int i = 4; i < 8; i++)
//			next.s += g.s[i];
//		for(int i = 0; i < 4; i++)
//			next.s += g.s[i];
//		next.ans = g.ans + 'A';
//		break;
//	case 2:
//		next.s = "11111111";
//		next.s[0] = g.s[3];
//		next.s[4] = g.s[7];
//		for(int i = 1; i < 4; i++)
//			next.s[i] = g.s[i -1];
//		for(int i =5; i < 8; i++)
//			next.s[i] = g.s[i - 1];
//		next.ans = g.ans + 'B';
//		break;
//	case 3:
//		next.s = "11111111";
//		next.s[0]=g.s[0];next.s[3]=g.s[3];next.s[4]=g.s[4];next.s[7]=g.s[7];
//		next.s[1]=g.s[5];next.s[2]=g.s[1];next.s[6]=g.s[2];next.s[5]=g.s[6];
//		next.ans = g.ans + 'C';
//	}
//}
//
//void bfs(graph g){
//	queue<graph> q;
//	q.push(g);
//	m[g.s] = 1;
//	while(!q.empty()){
//		graph temp = q.front();
//		q.pop();
//		if(temp.ans.size() > n){
//			cout << "-1" << endl;
//			return ;
//		}
//		for(int i = 1; i < 4; i++){
//			graph t_g;
//			change(temp, t_g, i);
//			if(t_g.s == target){
//				cout << t_g.ans.size()<< " " << t_g.ans << endl;
//				return ;
//			}
//			if(m[t_g.s]!=1){
//				m[t_g.s] = 1;
//				q.push(t_g);
//			}
//		}
//	}
//}
//int main(){
//	while(cin >> n && n != -1){
//		char temp;
//		m.clear();
//		graph g;
//		target = "";
//		for(int i = 0; i < 8; i++){
//			cin >> temp;
//			target += temp;
//		}
//		g.s = "12348765";
//		g.ans = "";
//		bfs(g);
//	}
//	return 0;
//}