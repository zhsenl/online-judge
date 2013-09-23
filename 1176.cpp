//#include <iostream>
//#include <algorithm>
//#include "string.h"
//using namespace std;
//
//int num[1001];
//int buf[1001][1001];
//
//int dp(int a, int b){
//	if (buf[a][b]){
//		return buf[a][b];
//	}
//	if(a + 1 == b){
//		return buf[a][b] = max(num[a], num[b]);
//	}
//	int l = num[a] + (num[a+1]>=num[b]? dp(a+2, b) : dp(a + 1, b -1));
//	int r = num[b] + (num[a] >= num[b-1]? dp(a+1,b-1) : dp(a,b-2));
//	return buf[a][b] =  max(l,r);
//}
//
//int main(){
//	int n;
//
//	int game_count = 0;
//	while(cin >> n && n != 0){
//		int sum = 0;
//		game_count ++;
//		for(int i = 0; i < n; i++){
//			cin >> num[i];
//			sum += num[i];
//		}
//		memset(buf, 0, sizeof(buf));
//		int p = dp(0, n - 1) * 2 - sum;
//		cout << "In game "<< game_count << ", the greedy strategy might lose by as many as " << p << " points." <<endl;
//	}
//}