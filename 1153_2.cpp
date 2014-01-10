#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

const int m = 8;
const int n = 8;
const int N = m * n + 1;

//每个位置可走的八个方向
int dx[] = {-1,-1,-2,-2,1,1,2,2};
int dy[] = {-2,2,1,-1,2,-2,1,-1};

bool visit[N + 1];//表示某个位置是否走过
int route[N + 1];//记录表示结果的路径
int cnt_size[N + 1];//记录某个位置的可扩展点数
vector<int> neighbors[N + 1];//表示每个位置的邻居

bool cmp(int x, int y){
	return cnt_size[x] < cnt_size[y];
}
//得到某个位置x的可扩展点数
int get_children_size(int x){
	int size = 0;
	for(int i = 0; i < neighbors[x].size(); i++){
		if(!visit[neighbors[x][i]]){
			size++;
		}
	}
	return size;
}
//得到某个位置x的所有可扩展点，并将它们放在children数组中
void get_children(int x, vector<int>* children){
	for(int i = 0; i < neighbors[x].size(); i++){
		int child = neighbors[x][i];
		if(!visit[child]){
			children->push_back(child);
			cnt_size[child] = get_children_size(child);
		}
	}
	sort(children->begin(), children->end(), cmp);
}
//打印出结果
void print_route(){
	for(int i = 0; i < N - 1; i++) cout << route[i] << " ";
	cout << route[N - 1] << endl;
}
//深度搜索
bool dfs(int x, int depth){
	cout << "x: " << x << "\t" << "depth: " << depth << endl;
	visit[x] = true;
	route[depth] = x;
	if(depth == N - 1){
		print_route();	
		return true;
	}
	vector<int> children;
	get_children(x, &children);
	for(int i = 0; i < children.size(); i++){
		if(dfs(children[i], depth + 1)) return true;
	}
	visit[x] = false;
	return false;
}
//计算每个点的邻居数组
void init(){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			for(int k = 0; k < 8; k++){
				int x = i + dx[k];
				int y = j + dy[k];
				if(x >= 0 && y >= 0 && x < m && y < n){
					neighbors[i * n + j + 1].push_back(x * n + y + 1);
				}
			}
		}
	}
}

int main(){
	//freopen("output.txt","w",stdout);
	int n;
	init();
	while(scanf("%d", &n) && n != -1){
		memset(visit, 0, sizeof(visit));
		dfs(n, 0);
	}
}