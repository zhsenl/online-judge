#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

const int m = 8;
const int n = 8;
const int N = m * n + 1;

//ÿ��λ�ÿ��ߵİ˸�����
int dx[] = {-1,-1,-2,-2,1,1,2,2};
int dy[] = {-2,2,1,-1,2,-2,1,-1};

bool visit[N + 1];//��ʾĳ��λ���Ƿ��߹�
int route[N + 1];//��¼��ʾ�����·��
int cnt_size[N + 1];//��¼ĳ��λ�õĿ���չ����
vector<int> neighbors[N + 1];//��ʾÿ��λ�õ��ھ�

bool cmp(int x, int y){
	return cnt_size[x] < cnt_size[y];
}
//�õ�ĳ��λ��x�Ŀ���չ����
int get_children_size(int x){
	int size = 0;
	for(int i = 0; i < neighbors[x].size(); i++){
		if(!visit[neighbors[x][i]]){
			size++;
		}
	}
	return size;
}
//�õ�ĳ��λ��x�����п���չ�㣬�������Ƿ���children������
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
//��ӡ�����
void print_route(){
	for(int i = 0; i < N - 1; i++) cout << route[i] << " ";
	cout << route[N - 1] << endl;
}
//�������
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
//����ÿ������ھ�����
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