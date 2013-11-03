//#include <iostream>
//#include <queue>
//#include <stack>
//#include <algorithm>
//#include <string>
//#include <stdio.h>
//#include <string.h>
//using namespace std;
////int const kMaxState = 88888888;
//int const kMaxState = 40320;//8! 所有可能的状态数，即搜索树最多的节点数
//bool visit[kMaxState]; //用于保存某个状态是否已经搜索过
////int parent[kMaxState]; //保存某个节点的父亲节点
////char operation[kMaxState]; // 保存操作
//
//struct State{
//	int state[2][4];
//	string path;
//
//	State(){
//		state[0][0] = 1;state[0][1] = 2; state[0][2] = 3; state[0][3] = 4;
//		state[1][0] = 5;state[1][1] = 6; state[1][2] = 7; state[1][3] = 8;
//		path = "";
//	}
//	void transformA(){
//		swap(state[0][0], state[0][2]); swap(state[1][0], state[1][2]);
//		swap(state[0][1], state[0][3]); swap(state[1][1], state[1][3]);
//		path += "A";
//	}
//	void transformB(){
//		int temp0 = state[0][0], temp1 = state[1][0];
//		for(int j = 3; j > -1; j--){
//			swap(state[0][j], temp0);
//			swap(state[1][j], temp1);
//			
//		}
//		path += "B";
//	}
//	void transformC(){
//		int temp = state[0][2];
//		swap(state[0][1], temp);
//		swap(state[1][1], temp);
//		swap(state[1][2], temp);
//		swap(state[0][2], temp);
//		path += "C";
//	}
//	bool equal(const State& another_state){
//		for(int i = 0; i < 2; i++){
//			for(int j = 0; j < 4; j++){
//				if(state[i][j] != another_state.state[i][j])
//					return false;
//			}
//		}
//		return true;
//	}
//	//这里采用康托展开做hash
//	int hash_value() const{
//		int factory[] = { 0, 1, 2, 6, 24, 120, 720, 5040, 40320};  
//		string temp = "";
//		for(int i = 0; i < 2; i++){
//			for(int j = 0; j < 4; j++){
//				temp += (state[i][j] + '0');
//			}
//		}
//		int hash_value = 0;
//		for(int i = 0; i < 8; i++){
//			int c = 0;
//			for(int j = i + 1; j < 8; j++){
//				if(temp[j] < temp[i]) c++;
//			}
//			hash_value += c * factory[7 - i];
//		}
//		return hash_value;
//	}
//	void display(){
//		for(int i = 0; i < 2; i++){
//			cout << endl;
//			for(int j = 0; j < 4; j++){
//				cout << state[i][j] << " ";
//			}
//		}
//	}
//};
//
//queue<State> que; // 即将要搜索的状态队列
//
//void update(const State& old_state, const State& new_state, char op){
//	que.push(new_state); // 将新状态加入搜索队列中
//	visit[new_state.hash_value()] = true; 
//	/*parent[new_state.hash_value()] = old_state.hash_value();
//	operation[new_state.hash_value()] = op;*/
//}
//
//void output(const State&state){
//	/*stack<int> res;
//	int temp = state.hash_value();
//	do 
//	{
//		res.push(temp);
//		temp = parent[temp];
//	} while (temp != 0);
//	cout << res.size() - 1 << " ";
//	res.pop();
//	while(!res.empty()){
//		cout << operation[res.top()];
//		res.pop();
//	}
//	cout << endl;*/
//	cout << state.path.size() << " " << state.path << endl;
//}
//
//void bfs(const State& start, const State& end_state, int n){
//	memset(visit, 0, sizeof(visit));
//	//memset(parent, 0, sizeof(parent));
//	while(!que.empty()){
//		que.pop();
//	}
//	que.push(start);
//	visit[start.hash_value()] = true;
//	while(!que.empty()){
//		State state = que.front();
//		que.pop();
//
//		if(state.equal(end_state)){
//			output(state);
//			return;
//		}else if(state.path.size() > n){
//			cout << -1 << endl;
//			return;
//		}
//
//		//遍历三种操作。每次搜索一个状态的时候都要先检查该状态是否已经搜索过了
//		State new_state = state; new_state.transformA();
//		if(!visit[new_state.hash_value()]) update(state, new_state, 'A');
//
//		new_state = state; new_state.transformB();
//		if(!visit[new_state.hash_value()]) update(state, new_state, 'B');
//
//		new_state = state; new_state.transformC();
//		if(!visit[new_state.hash_value()]) update(state, new_state, 'C');
//
//	}
//}
//
//int main(){
//	int n;
//	int temp;
//	State start_state;
//	State end_state;
//	
//	/*start_state.display();
//	start_state.transformA();
//	start_state.display();
//	start_state.transformB();
//	start_state.display();
//	start_state.transformC();
//	start_state.display();*/
//
//	while(scanf("%d",&n) && n != -1){		
//		for(int i = 0; i < 2; i++){
//			for(int j = 0; j < 4; j++){
//				scanf("%d",&temp);
//				end_state.state[i][j] = temp;
//			}
//		}
//		//cout << end_state.hash_value() << endl;
//		bfs(start_state, end_state, n);
//	}
//	//system("pause");
//}
