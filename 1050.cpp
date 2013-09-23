//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int q, m , num;
//int buffer[6];
//bool visit[6];
//
//void dfs(int k ){
//	for(int i = 1; i <= 5; i++){
//		if(!visit[i] && buffer[i] <= num && num -buffer[i] < q){
//			q = num - buffer[i];
//			m = buffer[i];
//		}
//	}
//	for(int i = 1; i <= 5; i++){
//		if(!visit[i]){
//			for(int j = i + 1; j <= 5; j++){
//				if(!visit[j]){
//					int tmp = buffer[i];
//					buffer[i] = buffer[i] + buffer[j];
//					visit[j] = true;
//					dfs(k -1);
//					visit[j] = false;
//					buffer[i] = tmp;
//					buffer[i] = buffer[i] - buffer[j];
//					visit[j] = true;
//				}
//			}
//		}
//	}
//}
//
//int main(){
//	int n;
//	cin >> n;
//	while(n--){
//		for(int i = 1; i <= 5; i++){
//			cin >> buffer[i];
//		}
//		cin >> num;
//		memset(visit, false, sizeof(visit));
//		q = 1000;
//		dfs(5);
//		cout << m << endl;
//	}
//	return 0;
//}